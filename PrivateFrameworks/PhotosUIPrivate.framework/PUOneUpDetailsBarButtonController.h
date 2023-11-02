
@interface PUOneUpDetailsBarButtonController : NSObject {
    void barButtonItem;
    void browseViewModel;
    void hasFinishedDisplayingVisualLookupGlyph;
    void revertTimer;
}

+ (id)defaultGlyphNameFor:(id)arg1;

- (void).cxx_destruct;
- (void)currentAssetDidChange;
- (id)init;
- (id)initWithBarButtonItem:(id)arg1 browseViewModel:(id)arg2;
- (void)update;

@end
