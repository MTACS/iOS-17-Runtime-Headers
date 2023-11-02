
@interface SATTSSpeechSynthesisWordTimingInfo : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long length;
@property (nonatomic) long long offset;
@property (nonatomic, copy) NSNumber *sampleIndex;
@property (readonly) Class superclass;
@property (nonatomic) float timestamp;
@property (nonatomic, copy) NSString *word;

+ (id)speechSynthesisWordTimingInfo;
+ (id)speechSynthesisWordTimingInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)length;
- (long long)offset;
- (id)sampleIndex;
- (void)setLength:(long long)arg1;
- (void)setOffset:(long long)arg1;
- (void)setSampleIndex:(id)arg1;
- (void)setTimestamp:(float)arg1;
- (void)setWord:(id)arg1;
- (float)timestamp;
- (id)word;

@end
