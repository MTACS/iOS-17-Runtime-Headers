
@interface ATVHighSecurityAccountSendCodeResponse : AAResponse

@property (nonatomic, readonly) long long errorCode;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSString *errorTitle;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) NSDictionary *userDisplayStrings;

- (long long)errorCode;
- (id)errorMessage;
- (id)errorTitle;
- (bool)success;
- (id)userDisplayStrings;

@end
