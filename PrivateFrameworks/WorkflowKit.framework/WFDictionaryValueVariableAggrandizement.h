
@interface WFDictionaryValueVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic, readonly) NSString *dictionaryKey;

- (void)applyToContentCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dictionaryKey;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionaryKey:(id)arg1;
- (id)processedContentClasses:(id)arg1;

@end
