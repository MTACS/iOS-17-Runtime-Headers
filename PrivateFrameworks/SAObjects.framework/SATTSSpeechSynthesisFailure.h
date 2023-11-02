
@interface SATTSSpeechSynthesisFailure : SABaseClientBoundCommand

@property (nonatomic) long long errorCode;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *reasonDescription;

+ (id)speechSynthesisFailure;
+ (id)speechSynthesisFailureWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (long long)errorCode;
- (id)groupIdentifier;
- (id)reason;
- (id)reasonDescription;
- (bool)requiresResponse;
- (void)setErrorCode:(long long)arg1;
- (void)setReason:(id)arg1;
- (void)setReasonDescription:(id)arg1;

@end
