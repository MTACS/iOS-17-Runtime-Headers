
@interface PXStoryStyleChromeLayout : PXGLayout <PXGStringSource, PXGViewSource> {
    NSIndexSet * _axSpriteIndexes;
    NSAttributedString * _colorGradeNameAttributedString;
    unsigned int  _colorGradeNameSpriteIndex;
    <PXStoryColorGradingRepository> * _colorGradingRepository;
    unsigned int  _customLabelSpriteIndex;
    unsigned int  _filterButtonSpriteIndex;
    unsigned short  _mediaVersion;
    unsigned int  _musicButtonSpriteIndex;
    id  _musicFeedbackContextMenuDelegate;
    unsigned int  _songArtworkSpriteIndex;
    unsigned int  _songSubtitleSpriteIndex;
    unsigned int  _songTitleAccessorySpriteIndex;
    unsigned int  _songTitleSpriteIndex;
    unsigned int  _spriteCount;
    <PXStoryStyleDescriptor> * _styleInfo;
    NSAttributedString * _subtitleAttributedString;
    NSAttributedString * _titleAccessoryAttributedString;
    NSAttributedString * _titleAttributedString;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    <PXStoryViewLayoutSpec> * _viewLayoutSpec;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic, readonly) NSAttributedString *colorGradeNameAttributedString;
@property (nonatomic, retain) <PXStoryColorGradingRepository> *colorGradingRepository;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short mediaVersion;
@property (nonatomic, readonly) id musicFeedbackContextMenuDelegate;
@property (nonatomic, retain) <PXStoryStyleDescriptor> *styleInfo;
@property (nonatomic, readonly) NSAttributedString *subtitleAttributedString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSAttributedString *titleAccessoryAttributedString;
@property (nonatomic, readonly) NSAttributedString *titleAttributedString;
@property (nonatomic, retain) <PXStoryViewLayoutSpec> *viewLayoutSpec;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

+ (void)startCachingResourcesForStyleInfo:(id)arg1 viewLayoutSpec:(id)arg2 displayScale:(double)arg3;
+ (void)stopCachingResourcesForStyleInfo:(id)arg1 viewLayoutSpec:(id)arg2 displayScale:(double)arg3;

- (void).cxx_destruct;
- (id)_actionPerformer;
- (void)_handleFilterButton:(id)arg1;
- (void)_handleMusicButton:(id)arg1;
- (void)_invalidateContent;
- (void)_invalidateStrings;
- (id)_styleSongAsset;
- (void)_updateContent;
- (void)alphaDidChange;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)arg1;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (id)axSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)axVisibleSpriteIndexes;
- (bool)canHandleVisibleRectRejection;
- (id)colorGradeNameAttributedString;
- (id)colorGradingRepository;
- (void)didUpdate;
- (void)displayScaleDidChange;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (unsigned short)mediaVersion;
- (id)musicFeedbackContextMenuDelegate;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)setColorGradingRepository:(id)arg1;
- (void)setMediaVersion:(unsigned short)arg1;
- (void)setStyleInfo:(id)arg1;
- (void)setViewLayoutSpec:(id)arg1;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (long long)stringDrawingOptionsForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)styleInfo;
- (id)subtitleAttributedString;
- (id)titleAccessoryAttributedString;
- (id)titleAttributedString;
- (void)update;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewLayoutSpec;
- (id)viewModel;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)willUpdate;

@end
