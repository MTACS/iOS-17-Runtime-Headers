
@interface EKPersistentSyncError : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (int)errorCode;
- (int)errorType;
- (void)setErrorCode:(int)arg1;
- (void)setErrorType:(int)arg1;
- (void)setUserInfoData:(id)arg1;
- (id)userInfoData;

@end
