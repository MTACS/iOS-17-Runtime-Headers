
@interface SASVSpeechMetadata : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *phraseDataList;
@property (nonatomic, copy) NSString *preITN;
@property (readonly) Class superclass;

+ (id)speechMetadata;
+ (id)speechMetadataWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phraseDataList;
- (id)preITN;
- (void)setPhraseDataList:(id)arg1;
- (void)setPreITN:(id)arg1;

@end
