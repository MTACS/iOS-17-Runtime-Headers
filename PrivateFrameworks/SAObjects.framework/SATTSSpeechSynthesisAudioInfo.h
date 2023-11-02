
@interface SATTSSpeechSynthesisAudioInfo : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *wordTimingInfoList;

+ (id)speechSynthesisAudioInfo;
+ (id)speechSynthesisAudioInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setWordTimingInfoList:(id)arg1;
- (id)wordTimingInfoList;

@end
