/* -*-c++-*- SintolRTI - Copyright (C) 2009-2013 Mathias Froehlich
 *
 *
 * This file is part of SintolRTI.
 *
 * SintolRTI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * SintolRTI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with SintolRTI.  If not, see <http://www.gnu.org/licenses/>.
 *
 * This file is autogenerated by messagegen.py. Do not edit!
 *
 */

#ifndef SintolRTI_AbstractMessageDispatcher_h
#define SintolRTI_AbstractMessageDispatcher_h

namespace SintolRTI {

class AbstractMessage;

class ConnectionLostMessage;
class CreateFederationExecutionRequestMessage;
class CreateFederationExecutionResponseMessage;
class DestroyFederationExecutionRequestMessage;
class DestroyFederationExecutionResponseMessage;
class EnumerateFederationExecutionsRequestMessage;
class EnumerateFederationExecutionsResponseMessage;
class InsertFederationExecutionMessage;
class ShutdownFederationExecutionMessage;
class EraseFederationExecutionMessage;
class ReleaseFederationHandleMessage;
class InsertModulesMessage;
class JoinFederationExecutionRequestMessage;
class JoinFederationExecutionResponseMessage;
class ResignFederationExecutionLeafRequestMessage;
class ResignFederationExecutionRequestMessage;
class JoinFederateNotifyMessage;
class ResignFederateNotifyMessage;
class ChangeAutomaticResignDirectiveMessage;
class RegisterFederationSynchronizationPointMessage;
class RegisterFederationSynchronizationPointResponseMessage;
class AnnounceSynchronizationPointMessage;
class SynchronizationPointAchievedMessage;
class FederationSynchronizedMessage;
class EnableTimeRegulationRequestMessage;
class EnableTimeRegulationResponseMessage;
class DisableTimeRegulationRequestMessage;
class CommitLowerBoundTimeStampMessage;
class CommitLowerBoundTimeStampResponseMessage;
class LockedByNextMessageRequestMessage;
class TimeConstrainedEnabledMessage;
class TimeRegulationEnabledMessage;
class TimeAdvanceGrantedMessage;
class InsertRegionMessage;
class CommitRegionMessage;
class EraseRegionMessage;
class ChangeInteractionClassPublicationMessage;
class ChangeObjectClassPublicationMessage;
class ChangeInteractionClassSubscriptionMessage;
class ChangeObjectClassSubscriptionMessage;
class RegistrationForObjectClassMessage;
class AttributesInScopeMessage;
class TurnUpdatesOnForInstanceMessage;
class TurnInteractionsOnMessage;
class InteractionMessage;
class TimeStampedInteractionMessage;
class ObjectInstanceHandlesRequestMessage;
class ObjectInstanceHandlesResponseMessage;
class ReleaseMultipleObjectInstanceNameHandlePairsMessage;
class ReserveObjectInstanceNameRequestMessage;
class ReserveObjectInstanceNameResponseMessage;
class ReserveMultipleObjectInstanceNameRequestMessage;
class ReserveMultipleObjectInstanceNameResponseMessage;
class InsertObjectInstanceMessage;
class DeleteObjectInstanceMessage;
class TimeStampedDeleteObjectInstanceMessage;
class AttributeUpdateMessage;
class TimeStampedAttributeUpdateMessage;
class RequestAttributeUpdateMessage;
class RequestClassAttributeUpdateMessage;

class SintolRTI_LOCAL AbstractMessageDispatcher {
public:
  virtual ~AbstractMessageDispatcher() {}

  virtual void accept(const ConnectionLostMessage&) const = 0;
  virtual void accept(const CreateFederationExecutionRequestMessage&) const = 0;
  virtual void accept(const CreateFederationExecutionResponseMessage&) const = 0;
  virtual void accept(const DestroyFederationExecutionRequestMessage&) const = 0;
  virtual void accept(const DestroyFederationExecutionResponseMessage&) const = 0;
  virtual void accept(const EnumerateFederationExecutionsRequestMessage&) const = 0;
  virtual void accept(const EnumerateFederationExecutionsResponseMessage&) const = 0;
  virtual void accept(const InsertFederationExecutionMessage&) const = 0;
  virtual void accept(const ShutdownFederationExecutionMessage&) const = 0;
  virtual void accept(const EraseFederationExecutionMessage&) const = 0;
  virtual void accept(const ReleaseFederationHandleMessage&) const = 0;
  virtual void accept(const InsertModulesMessage&) const = 0;
  virtual void accept(const JoinFederationExecutionRequestMessage&) const = 0;
  virtual void accept(const JoinFederationExecutionResponseMessage&) const = 0;
  virtual void accept(const ResignFederationExecutionLeafRequestMessage&) const = 0;
  virtual void accept(const ResignFederationExecutionRequestMessage&) const = 0;
  virtual void accept(const JoinFederateNotifyMessage&) const = 0;
  virtual void accept(const ResignFederateNotifyMessage&) const = 0;
  virtual void accept(const ChangeAutomaticResignDirectiveMessage&) const = 0;
  virtual void accept(const RegisterFederationSynchronizationPointMessage&) const = 0;
  virtual void accept(const RegisterFederationSynchronizationPointResponseMessage&) const = 0;
  virtual void accept(const AnnounceSynchronizationPointMessage&) const = 0;
  virtual void accept(const SynchronizationPointAchievedMessage&) const = 0;
  virtual void accept(const FederationSynchronizedMessage&) const = 0;
  virtual void accept(const EnableTimeRegulationRequestMessage&) const = 0;
  virtual void accept(const EnableTimeRegulationResponseMessage&) const = 0;
  virtual void accept(const DisableTimeRegulationRequestMessage&) const = 0;
  virtual void accept(const CommitLowerBoundTimeStampMessage&) const = 0;
  virtual void accept(const CommitLowerBoundTimeStampResponseMessage&) const = 0;
  virtual void accept(const LockedByNextMessageRequestMessage&) const = 0;
  virtual void accept(const TimeConstrainedEnabledMessage&) const = 0;
  virtual void accept(const TimeRegulationEnabledMessage&) const = 0;
  virtual void accept(const TimeAdvanceGrantedMessage&) const = 0;
  virtual void accept(const InsertRegionMessage&) const = 0;
  virtual void accept(const CommitRegionMessage&) const = 0;
  virtual void accept(const EraseRegionMessage&) const = 0;
  virtual void accept(const ChangeInteractionClassPublicationMessage&) const = 0;
  virtual void accept(const ChangeObjectClassPublicationMessage&) const = 0;
  virtual void accept(const ChangeInteractionClassSubscriptionMessage&) const = 0;
  virtual void accept(const ChangeObjectClassSubscriptionMessage&) const = 0;
  virtual void accept(const RegistrationForObjectClassMessage&) const = 0;
  virtual void accept(const AttributesInScopeMessage&) const = 0;
  virtual void accept(const TurnUpdatesOnForInstanceMessage&) const = 0;
  virtual void accept(const TurnInteractionsOnMessage&) const = 0;
  virtual void accept(const InteractionMessage&) const = 0;
  virtual void accept(const TimeStampedInteractionMessage&) const = 0;
  virtual void accept(const ObjectInstanceHandlesRequestMessage&) const = 0;
  virtual void accept(const ObjectInstanceHandlesResponseMessage&) const = 0;
  virtual void accept(const ReleaseMultipleObjectInstanceNameHandlePairsMessage&) const = 0;
  virtual void accept(const ReserveObjectInstanceNameRequestMessage&) const = 0;
  virtual void accept(const ReserveObjectInstanceNameResponseMessage&) const = 0;
  virtual void accept(const ReserveMultipleObjectInstanceNameRequestMessage&) const = 0;
  virtual void accept(const ReserveMultipleObjectInstanceNameResponseMessage&) const = 0;
  virtual void accept(const InsertObjectInstanceMessage&) const = 0;
  virtual void accept(const DeleteObjectInstanceMessage&) const = 0;
  virtual void accept(const TimeStampedDeleteObjectInstanceMessage&) const = 0;
  virtual void accept(const AttributeUpdateMessage&) const = 0;
  virtual void accept(const TimeStampedAttributeUpdateMessage&) const = 0;
  virtual void accept(const RequestAttributeUpdateMessage&) const = 0;
  virtual void accept(const RequestClassAttributeUpdateMessage&) const = 0;
};

template<typename T>
class SintolRTI_LOCAL FunctorMessageDispatcher : public AbstractMessageDispatcher {
public:
  FunctorMessageDispatcher(T& t) : _t(t) {}
  virtual ~FunctorMessageDispatcher() {}

  virtual void accept(const ConnectionLostMessage& message) const { _t(message); }
  virtual void accept(const CreateFederationExecutionRequestMessage& message) const { _t(message); }
  virtual void accept(const CreateFederationExecutionResponseMessage& message) const { _t(message); }
  virtual void accept(const DestroyFederationExecutionRequestMessage& message) const { _t(message); }
  virtual void accept(const DestroyFederationExecutionResponseMessage& message) const { _t(message); }
  virtual void accept(const EnumerateFederationExecutionsRequestMessage& message) const { _t(message); }
  virtual void accept(const EnumerateFederationExecutionsResponseMessage& message) const { _t(message); }
  virtual void accept(const InsertFederationExecutionMessage& message) const { _t(message); }
  virtual void accept(const ShutdownFederationExecutionMessage& message) const { _t(message); }
  virtual void accept(const EraseFederationExecutionMessage& message) const { _t(message); }
  virtual void accept(const ReleaseFederationHandleMessage& message) const { _t(message); }
  virtual void accept(const InsertModulesMessage& message) const { _t(message); }
  virtual void accept(const JoinFederationExecutionRequestMessage& message) const { _t(message); }
  virtual void accept(const JoinFederationExecutionResponseMessage& message) const { _t(message); }
  virtual void accept(const ResignFederationExecutionLeafRequestMessage& message) const { _t(message); }
  virtual void accept(const ResignFederationExecutionRequestMessage& message) const { _t(message); }
  virtual void accept(const JoinFederateNotifyMessage& message) const { _t(message); }
  virtual void accept(const ResignFederateNotifyMessage& message) const { _t(message); }
  virtual void accept(const ChangeAutomaticResignDirectiveMessage& message) const { _t(message); }
  virtual void accept(const RegisterFederationSynchronizationPointMessage& message) const { _t(message); }
  virtual void accept(const RegisterFederationSynchronizationPointResponseMessage& message) const { _t(message); }
  virtual void accept(const AnnounceSynchronizationPointMessage& message) const { _t(message); }
  virtual void accept(const SynchronizationPointAchievedMessage& message) const { _t(message); }
  virtual void accept(const FederationSynchronizedMessage& message) const { _t(message); }
  virtual void accept(const EnableTimeRegulationRequestMessage& message) const { _t(message); }
  virtual void accept(const EnableTimeRegulationResponseMessage& message) const { _t(message); }
  virtual void accept(const DisableTimeRegulationRequestMessage& message) const { _t(message); }
  virtual void accept(const CommitLowerBoundTimeStampMessage& message) const { _t(message); }
  virtual void accept(const CommitLowerBoundTimeStampResponseMessage& message) const { _t(message); }
  virtual void accept(const LockedByNextMessageRequestMessage& message) const { _t(message); }
  virtual void accept(const TimeConstrainedEnabledMessage& message) const { _t(message); }
  virtual void accept(const TimeRegulationEnabledMessage& message) const { _t(message); }
  virtual void accept(const TimeAdvanceGrantedMessage& message) const { _t(message); }
  virtual void accept(const InsertRegionMessage& message) const { _t(message); }
  virtual void accept(const CommitRegionMessage& message) const { _t(message); }
  virtual void accept(const EraseRegionMessage& message) const { _t(message); }
  virtual void accept(const ChangeInteractionClassPublicationMessage& message) const { _t(message); }
  virtual void accept(const ChangeObjectClassPublicationMessage& message) const { _t(message); }
  virtual void accept(const ChangeInteractionClassSubscriptionMessage& message) const { _t(message); }
  virtual void accept(const ChangeObjectClassSubscriptionMessage& message) const { _t(message); }
  virtual void accept(const RegistrationForObjectClassMessage& message) const { _t(message); }
  virtual void accept(const AttributesInScopeMessage& message) const { _t(message); }
  virtual void accept(const TurnUpdatesOnForInstanceMessage& message) const { _t(message); }
  virtual void accept(const TurnInteractionsOnMessage& message) const { _t(message); }
  virtual void accept(const InteractionMessage& message) const { _t(message); }
  virtual void accept(const TimeStampedInteractionMessage& message) const { _t(message); }
  virtual void accept(const ObjectInstanceHandlesRequestMessage& message) const { _t(message); }
  virtual void accept(const ObjectInstanceHandlesResponseMessage& message) const { _t(message); }
  virtual void accept(const ReleaseMultipleObjectInstanceNameHandlePairsMessage& message) const { _t(message); }
  virtual void accept(const ReserveObjectInstanceNameRequestMessage& message) const { _t(message); }
  virtual void accept(const ReserveObjectInstanceNameResponseMessage& message) const { _t(message); }
  virtual void accept(const ReserveMultipleObjectInstanceNameRequestMessage& message) const { _t(message); }
  virtual void accept(const ReserveMultipleObjectInstanceNameResponseMessage& message) const { _t(message); }
  virtual void accept(const InsertObjectInstanceMessage& message) const { _t(message); }
  virtual void accept(const DeleteObjectInstanceMessage& message) const { _t(message); }
  virtual void accept(const TimeStampedDeleteObjectInstanceMessage& message) const { _t(message); }
  virtual void accept(const AttributeUpdateMessage& message) const { _t(message); }
  virtual void accept(const TimeStampedAttributeUpdateMessage& message) const { _t(message); }
  virtual void accept(const RequestAttributeUpdateMessage& message) const { _t(message); }
  virtual void accept(const RequestClassAttributeUpdateMessage& message) const { _t(message); }
private:
  T& _t;
};

template<typename T>
class SintolRTI_LOCAL ConstFunctorMessageDispatcher : public AbstractMessageDispatcher {
public:
  ConstFunctorMessageDispatcher(const T& t) : _t(t) {}
  virtual ~ConstFunctorMessageDispatcher() {}

  virtual void accept(const ConnectionLostMessage& message) const { _t(message); }
  virtual void accept(const CreateFederationExecutionRequestMessage& message) const { _t(message); }
  virtual void accept(const CreateFederationExecutionResponseMessage& message) const { _t(message); }
  virtual void accept(const DestroyFederationExecutionRequestMessage& message) const { _t(message); }
  virtual void accept(const DestroyFederationExecutionResponseMessage& message) const { _t(message); }
  virtual void accept(const EnumerateFederationExecutionsRequestMessage& message) const { _t(message); }
  virtual void accept(const EnumerateFederationExecutionsResponseMessage& message) const { _t(message); }
  virtual void accept(const InsertFederationExecutionMessage& message) const { _t(message); }
  virtual void accept(const ShutdownFederationExecutionMessage& message) const { _t(message); }
  virtual void accept(const EraseFederationExecutionMessage& message) const { _t(message); }
  virtual void accept(const ReleaseFederationHandleMessage& message) const { _t(message); }
  virtual void accept(const InsertModulesMessage& message) const { _t(message); }
  virtual void accept(const JoinFederationExecutionRequestMessage& message) const { _t(message); }
  virtual void accept(const JoinFederationExecutionResponseMessage& message) const { _t(message); }
  virtual void accept(const ResignFederationExecutionLeafRequestMessage& message) const { _t(message); }
  virtual void accept(const ResignFederationExecutionRequestMessage& message) const { _t(message); }
  virtual void accept(const JoinFederateNotifyMessage& message) const { _t(message); }
  virtual void accept(const ResignFederateNotifyMessage& message) const { _t(message); }
  virtual void accept(const ChangeAutomaticResignDirectiveMessage& message) const { _t(message); }
  virtual void accept(const RegisterFederationSynchronizationPointMessage& message) const { _t(message); }
  virtual void accept(const RegisterFederationSynchronizationPointResponseMessage& message) const { _t(message); }
  virtual void accept(const AnnounceSynchronizationPointMessage& message) const { _t(message); }
  virtual void accept(const SynchronizationPointAchievedMessage& message) const { _t(message); }
  virtual void accept(const FederationSynchronizedMessage& message) const { _t(message); }
  virtual void accept(const EnableTimeRegulationRequestMessage& message) const { _t(message); }
  virtual void accept(const EnableTimeRegulationResponseMessage& message) const { _t(message); }
  virtual void accept(const DisableTimeRegulationRequestMessage& message) const { _t(message); }
  virtual void accept(const CommitLowerBoundTimeStampMessage& message) const { _t(message); }
  virtual void accept(const CommitLowerBoundTimeStampResponseMessage& message) const { _t(message); }
  virtual void accept(const LockedByNextMessageRequestMessage& message) const { _t(message); }
  virtual void accept(const TimeConstrainedEnabledMessage& message) const { _t(message); }
  virtual void accept(const TimeRegulationEnabledMessage& message) const { _t(message); }
  virtual void accept(const TimeAdvanceGrantedMessage& message) const { _t(message); }
  virtual void accept(const InsertRegionMessage& message) const { _t(message); }
  virtual void accept(const CommitRegionMessage& message) const { _t(message); }
  virtual void accept(const EraseRegionMessage& message) const { _t(message); }
  virtual void accept(const ChangeInteractionClassPublicationMessage& message) const { _t(message); }
  virtual void accept(const ChangeObjectClassPublicationMessage& message) const { _t(message); }
  virtual void accept(const ChangeInteractionClassSubscriptionMessage& message) const { _t(message); }
  virtual void accept(const ChangeObjectClassSubscriptionMessage& message) const { _t(message); }
  virtual void accept(const RegistrationForObjectClassMessage& message) const { _t(message); }
  virtual void accept(const AttributesInScopeMessage& message) const { _t(message); }
  virtual void accept(const TurnUpdatesOnForInstanceMessage& message) const { _t(message); }
  virtual void accept(const TurnInteractionsOnMessage& message) const { _t(message); }
  virtual void accept(const InteractionMessage& message) const { _t(message); }
  virtual void accept(const TimeStampedInteractionMessage& message) const { _t(message); }
  virtual void accept(const ObjectInstanceHandlesRequestMessage& message) const { _t(message); }
  virtual void accept(const ObjectInstanceHandlesResponseMessage& message) const { _t(message); }
  virtual void accept(const ReleaseMultipleObjectInstanceNameHandlePairsMessage& message) const { _t(message); }
  virtual void accept(const ReserveObjectInstanceNameRequestMessage& message) const { _t(message); }
  virtual void accept(const ReserveObjectInstanceNameResponseMessage& message) const { _t(message); }
  virtual void accept(const ReserveMultipleObjectInstanceNameRequestMessage& message) const { _t(message); }
  virtual void accept(const ReserveMultipleObjectInstanceNameResponseMessage& message) const { _t(message); }
  virtual void accept(const InsertObjectInstanceMessage& message) const { _t(message); }
  virtual void accept(const DeleteObjectInstanceMessage& message) const { _t(message); }
  virtual void accept(const TimeStampedDeleteObjectInstanceMessage& message) const { _t(message); }
  virtual void accept(const AttributeUpdateMessage& message) const { _t(message); }
  virtual void accept(const TimeStampedAttributeUpdateMessage& message) const { _t(message); }
  virtual void accept(const RequestAttributeUpdateMessage& message) const { _t(message); }
  virtual void accept(const RequestClassAttributeUpdateMessage& message) const { _t(message); }
private:
  const T& _t;
};

} // namespace SintolRTI

#endif
