
@interface PGTripHighlightTitleGenerator : PGTitleGenerator {
    <PGEventEnrichment> * _collection;
}

@property (nonatomic, readonly) <PGEventEnrichment> *collection;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)_locationTitle;
- (bool)_useSplitTimeTitlesIfNeeded;
- (id)collection;
- (id)initWithCollection:(id)arg1 titleGenerationContext:(id)arg2;

@end
