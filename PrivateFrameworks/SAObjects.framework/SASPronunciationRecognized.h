
@interface SASPronunciationRecognized : SABaseClientBoundCommand

@property (nonatomic, copy) NSNumber *errorCode;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, retain) SASPronunciationData *pronunciationData;

+ (id)pronunciationRecognized;
+ (id)pronunciationRecognizedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)errorCode;
- (id)groupIdentifier;
- (id)interactionId;
- (id)pronunciationData;
- (bool)requiresResponse;
- (void)setErrorCode:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setPronunciationData:(id)arg1;

@end
