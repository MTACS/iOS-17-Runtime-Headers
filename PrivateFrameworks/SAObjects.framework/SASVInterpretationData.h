
@interface SASVInterpretationData : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *tokenDataList;

+ (id)interpretationData;
+ (id)interpretationDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTokenDataList:(id)arg1;
- (id)tokenDataList;

@end
