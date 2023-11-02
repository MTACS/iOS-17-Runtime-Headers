
@interface SAPreSynthesizeTTS : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *aceAudioData;
@property (nonatomic, copy) NSArray *dialogStrings;
@property (nonatomic, copy) NSDictionary *speakableContextInfo;
@property (nonatomic, copy) NSArray *streamIds;

+ (id)preSynthesizeTTS;
+ (id)preSynthesizeTTSWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceAudioData;
- (id)dialogStrings;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAceAudioData:(id)arg1;
- (void)setDialogStrings:(id)arg1;
- (void)setSpeakableContextInfo:(id)arg1;
- (void)setStreamIds:(id)arg1;
- (id)speakableContextInfo;
- (id)streamIds;

@end
