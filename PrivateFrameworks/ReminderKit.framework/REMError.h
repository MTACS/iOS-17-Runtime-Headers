
@interface REMError : NSObject

+ (id)_errorSanitizedForXPCFromError:(id)arg1;
+ (id)_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 path:(id)arg4 URL:(id)arg5 description:(id)arg6;
+ (bool)_isCoreDataError:(id)arg1;
+ (id)accountStoreMissingError:(id)arg1;
+ (id)babySatErrorWithOperationName:(id)arg1;
+ (id)cancelledError;
+ (bool)catchObjCException:(id /* block */)arg1 error:(id*)arg2;
+ (id)constraintConflictWithIdentifier:(id)arg1 constraint:(id)arg2;
+ (id)errorFromErrors:(id)arg1;
+ (id)errorSanitizedForXPCFromError:(id)arg1;
+ (id)internalErrorWithDebugDescription:(id)arg1;
+ (id)internetNotReachableError;
+ (id)invalidParameterErrorWithDescription:(id)arg1;
+ (bool)isNoSuchObjectError:(id)arg1 forObjectID:(id)arg2;
+ (id)mismatchedObjectIDWithObjectID:(id)arg1 expected:(Class)arg2;
+ (id)noPrimaryActiveCloudKitAccountError;
+ (id)noSuchObjectErrorWithDACalendarItemUniqueIdentifier:(id)arg1;
+ (id)noSuchObjectErrorWithExternalIdentifier:(id)arg1;
+ (id)noSuchObjectErrorWithObjectID:(id)arg1;
+ (id)noSuchSmartListErrorWithSmartListType:(id)arg1;
+ (id)notSupportedError;
+ (id)notSupportedErrorWithDebugDescription:(id)arg1;
+ (id)nullifiedRelationshipErrorWithRelationshipName:(id)arg1;
+ (id)retryLaterErrorWithInterval:(double)arg1;
+ (id)saveErrorWithCoreDataError:(id)arg1;
+ (id)sqliteErrorWithCode:(long long)arg1 format:(id)arg2;
+ (id)sqliteErrorWithCode:(long long)arg1 path:(id)arg2 format:(id)arg3;
+ (id)throttledErrorWithRemainingTimeInterval:(double)arg1;
+ (id)tooManyLoadedStoresError;
+ (id)unauthorizedErrorWithMissingEntitlement:(id)arg1;
+ (id)unauthorizedErrorWithMissingEntitlement:(id)arg1 requestedAccessLevel:(id)arg2 currentAccesslevel:(id)arg3;
+ (id)unexpectedError;
+ (id)unexpectedNilPropertyWithClass:(Class)arg1 property:(id)arg2;
+ (id)unexpectedNilPropertyWithObjectID:(id)arg1 property:(id)arg2;
+ (id)validationErrorDifferentZoneObjectID:(id)arg1 zoneOwnerName:(id)arg2 parentObjectID:(id)arg3 parentZoneOwnerName:(id)arg4;
+ (id)validationErrorListHasNoAccount:(id)arg1;
+ (id)validationErrorMoveAcrossAccount:(id)arg1;
+ (id)validationErrorMoveFromAccount:(id)arg1 toAccount:(id)arg2 objectID:(id)arg3;
+ (id)validationErrorMoveReminderFromList:(id)arg1 toList:(id)arg2 inAccount:(id)arg3;
+ (id)validationErrorNestedSubtask:(id)arg1 parentReminderID:(id)arg2;
+ (id)validationErrorNotCloudKitAccount:(id)arg1;
+ (id)validationErrorRemoveAccountBeingActivated:(id)arg1;
+ (id)validationErrorRemoveAccountBeingInserted:(id)arg1;
+ (id)validationErrorSubtaskAndParentNotOnSameList:(id)arg1 parentReminderID:(id)arg2;
+ (id)validationErrorUndeleteHashtagFromAnotherReminder:(id)arg1 expectedReminderID:(id)arg2;
+ (id)xpcPerformerUnavailableErrorWithDescription:(id)arg1;

@end
