
@interface PKCloudStoreError : NSError

+ (bool)_isCloudKitErrorDomain:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

- (id)_allPartialErrors;
- (long long)_code;
- (id)_objectsOfClassTypeFromPartialErrors:(Class)arg1;
- (id)_partialErrorsDictionary;
- (id)allZoneIDs;
- (id)errorForPartialErrorWithObject:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)initWithError:(id)arg1;
- (bool)isAccountUnavailable;
- (bool)isAuthenticationOrQuotaError;
- (bool)isChangeTokenExpired;
- (bool)isInitializationTimeOutError;
- (bool)isKeychainSyncingInProgress;
- (bool)isManateeNotAvailableError;
- (bool)isNetworkUnavailable;
- (bool)isPCSError;
- (bool)isPartialError;
- (bool)isPartialErrorWithUnkownItems;
- (bool)isParticipantMayNeedVerificationError;
- (bool)isUnknownItemError;
- (bool)isUnrecoverableDecryptionError;
- (bool)isZoneNotFoundError;

@end
