
@interface SATTSSpeechSynthesisStreamingEnd : SATTSSpeechSynthesisStreaming

@property (nonatomic) long long count;
@property (nonatomic) long long errorCode;
@property (nonatomic, copy) NSString *errorMessage;

+ (id)speechSynthesisStreamingEnd;
+ (id)speechSynthesisStreamingEndWithDictionary:(id)arg1 context:(id)arg2;

- (long long)count;
- (id)encodedClassName;
- (long long)errorCode;
- (id)errorMessage;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCount:(long long)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorMessage:(id)arg1;

@end
