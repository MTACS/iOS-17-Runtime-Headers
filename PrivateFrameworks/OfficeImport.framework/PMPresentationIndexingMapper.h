
@interface PMPresentationIndexingMapper : CMIndexingMapper

@property (readonly) PDPresentation *document;

- (void)_indexDrawable:(id)arg1 intoString:(id)arg2;
- (void)_indexSlide:(id)arg1 intoString:(id)arg2;
- (void)_indexTable:(id)arg1 intoString:(id)arg2;
- (void)_indexTextBody:(id)arg1 intoString:(id)arg2;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(bool)arg4;
- (void)mapWithState:(id)arg1;

@end
