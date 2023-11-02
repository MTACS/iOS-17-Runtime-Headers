
@interface IMSyncErrorAnalyzer : NSObject <SyncErrorAnalyzing>

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)sharedInstance;

- (bool)CKPartialError:(id)arg1 hasErrorCode:(id)arg2;
- (bool)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2;
- (id)_errorsFromPartialError:(id)arg1;
- (bool)_isCKErrorPartialFailure:(id)arg1;
- (bool)acceptableErrorCodeWhileDeleting:(id)arg1;
- (unsigned long long)calculateDelay:(unsigned long long)arg1 forAttempt:(unsigned long long)arg2 maxInterval:(unsigned long long)arg3;
- (bool)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg1;
- (bool)errorIndicatesAssetWasNotAvailable:(id)arg1;
- (bool)errorIndicatesBatchFailure:(id)arg1;
- (bool)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1;
- (bool)errorIndicatesIdentityWasLost:(id)arg1;
- (bool)errorIndicatesItemWasUnknown:(id)arg1;
- (bool)errorIndicatesMaxAttemptsFailed:(id)arg1;
- (bool)errorIndicatesQuotaExceeded:(id)arg1;
- (bool)errorIndicatesRecordWasAlreadyChanged:(id)arg1;
- (bool)errorIndicatesRecordWasAlreadySaved:(id)arg1;
- (bool)errorIndicatesRecordWasArchived:(id)arg1;
- (bool)errorIndicatesTokenWasExpired:(id)arg1;
- (bool)errorIndicatesUserDeletedZone:(id)arg1;
- (bool)errorIndicatesZoneNotCreated:(id)arg1;
- (bool)errorIndicatesZoneNotFound:(id)arg1;
- (id)extractRecordIDsDeletedFromCKPartialError:(id)arg1;
- (id)extractRecordIDsNotFoundFromCKPartialError:(id)arg1;
- (long long)responseForError:(id)arg1 attempt:(unsigned long long)arg2 retryInterval:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (bool)wasAssetNotAvailable:(id)arg1;
- (bool)wasBatchFailure:(id)arg1;
- (bool)wasOutOfSyncConditionsInError:(id)arg1;
- (bool)wasQuotaExceededInError:(id)arg1;
- (bool)wasRecordAlreadyChanged:(id)arg1;
- (bool)wasRecordAlreadySaved:(id)arg1;
- (bool)wasRecordArchived:(id)arg1;
- (bool)wasTokenExpired:(id)arg1;
- (bool)wasUnknownItem:(id)arg1;
- (bool)wasZoneDeletedByUserInError:(id)arg1;
- (bool)wasZoneNotCreated:(id)arg1;
- (bool)wasZoneNotFound:(id)arg1;

@end
