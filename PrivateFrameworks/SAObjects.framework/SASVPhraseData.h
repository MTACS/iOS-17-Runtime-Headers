
@interface SASVPhraseData : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *interpretationDataList;
@property (readonly) Class superclass;

+ (id)phraseData;
+ (id)phraseDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interpretationDataList;
- (void)setInterpretationDataList:(id)arg1;

@end
