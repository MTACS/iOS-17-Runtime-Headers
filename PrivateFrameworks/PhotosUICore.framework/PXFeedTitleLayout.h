
@interface PXFeedTitleLayout : PXGLayout <PXChangeObserver, PXGStringSource> {
    NSDictionary * _subtitleAttributes;
    unsigned short  _titleMediaVersion;
    unsigned int  _titleSpriteIndex;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXFeedViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXFeedViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateAttributes;
- (void)_invalidateTitle;
- (void)_invalidateTitleContentVersion;
- (void)_updateAttributes;
- (void)_updateTitle;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)axSpriteIndexes;
- (void)displayScaleDidChange;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)referenceSizeDidChange;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)update;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewModel;

@end
