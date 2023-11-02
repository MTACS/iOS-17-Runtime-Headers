
@interface PXStoryBackgroundLayout : PXGLayout <PXGSolidColorSource> {
    void updater;
}

- (void).cxx_destruct;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)displayScaleDidChange;
- (id)init;
- (void)referenceSizeDidChange;
- (void)updateContent;
- (void)updateIfNeeded;

@end
