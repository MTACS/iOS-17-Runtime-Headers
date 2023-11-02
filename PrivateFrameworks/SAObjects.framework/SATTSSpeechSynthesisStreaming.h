
@interface SATTSSpeechSynthesisStreaming : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *streamId;

+ (id)speechSynthesisStreaming;
+ (id)speechSynthesisStreamingWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setStreamId:(id)arg1;
- (id)streamId;

@end
