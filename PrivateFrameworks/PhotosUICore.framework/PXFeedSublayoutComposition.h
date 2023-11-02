
@interface PXFeedSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXLayoutGenerator * _cachedLayoutGenerator;
    <PXFeedViewLayoutSpec> * _spec;
}

@property (nonatomic, readonly) long long scrollableAxis;
@property (nonatomic, retain) <PXFeedViewLayoutSpec> *spec;

- (void).cxx_destruct;
- (id)configuredLayoutGenerator;
- (long long)scrollableAxis;
- (void)setSpec:(id)arg1;
- (id)spec;
- (void)visibleRectDidChange;

@end
