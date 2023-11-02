
@interface WMDocumentIndexingMapper : CMIndexingMapper

@property (readonly) WDDocument *document;

- (void)_indexBlock:(id)arg1 intoString:(id)arg2;
- (void)_indexTable:(id)arg1 intoString:(id)arg2;
- (void)_indexText:(id)arg1 intoString:(id)arg2;
- (void)mapWithState:(id)arg1;

@end
