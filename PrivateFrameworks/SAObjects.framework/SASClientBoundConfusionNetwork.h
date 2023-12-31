
@interface SASClientBoundConfusionNetwork : SABaseClientBoundCommand

@property (nonatomic, retain) SASRecognition *rawRecognition;
@property (nonatomic, copy) NSString *sessionId;

+ (id)clientBoundConfusionNetwork;
+ (id)clientBoundConfusionNetworkWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)rawRecognition;
- (bool)requiresResponse;
- (id)sessionId;
- (void)setRawRecognition:(id)arg1;
- (void)setSessionId:(id)arg1;

@end
