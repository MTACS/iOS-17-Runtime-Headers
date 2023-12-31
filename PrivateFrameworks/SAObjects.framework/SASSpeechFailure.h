
@interface SASSpeechFailure : SABaseClientBoundCommand

@property (nonatomic) long long errorCode;
@property (nonatomic) int reason;
@property (nonatomic, copy) NSString *reasonDescription;

+ (id)speechFailure;
+ (id)speechFailureWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (long long)errorCode;
- (id)groupIdentifier;
- (int)reason;
- (id)reasonDescription;
- (bool)requiresResponse;
- (void)setErrorCode:(long long)arg1;
- (void)setReason:(int)arg1;
- (void)setReasonDescription:(id)arg1;

@end
