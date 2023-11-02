
@interface PXStoryFadeOverlayLayout : PXGLayout <PXChangeObserver, PXGSolidColorSource> {
    unsigned int  _fadeSpriteIndex;
    PXStoryModel * _model;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXStoryModel *model;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateContent;
- (void)_updateContent;
- (void)alphaDidChange;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)didUpdate;
- (id)init;
- (id)initWithModel:(id)arg1;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)referenceSizeDidChange;
- (void)update;
- (void)willUpdate;

@end
