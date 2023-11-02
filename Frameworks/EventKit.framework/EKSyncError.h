
@interface EKSyncError : EKObject

@property (nonatomic, readonly) unsigned long long errorCode;
@property (nonatomic, readonly) unsigned long long errorType;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (id)augmentSyncErrorUserInfo:(id)arg1 for:(id)arg2;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;

- (unsigned long long)errorCode;
- (unsigned long long)errorType;
- (id)initWithAccountError:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)initWithCalendarError:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)initWithCalendarItemError:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)setErrorCode:(unsigned long long)arg1;
- (void)setErrorType:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoData:(id)arg1;
- (id)userInfo;
- (id)userInfoData;

@end
