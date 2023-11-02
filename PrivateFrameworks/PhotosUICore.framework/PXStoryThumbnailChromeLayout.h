
@interface PXStoryThumbnailChromeLayout : PXGAbsoluteCompositeLayout <PXChangeObserver, PXGViewSource> {
    unsigned int  _actionMenuButtonSpriteIndex;
    <PXStoryThumbnailActionPerformer> * _actionPerformer;
    NSNumber * _alphaOverride;
    NSIndexSet * _axSpriteIndexes;
    unsigned short  _contentVersion;
    unsigned int  _detailsViewButtonSpriteIndex;
    unsigned int  _favoriteButtonSpriteIndex;
    bool  _isFavorite;
    PXStoryModel * _model;
    unsigned int  _playButtonSpriteIndex;
    double  _scaleFromTopRightCorner;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic, readonly) <PXStoryThumbnailActionPerformer> *actionPerformer;
@property (nonatomic, retain) NSNumber *alphaOverride;
@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFavorite;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic) double scaleFromTopRightCorner;
@property (nonatomic, readonly) <PXStoryLayoutSpec> *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_baseConfigurationForButtonWithSystemImageName:(id)arg1;
- (id)_buttonConfigurationForSpriteIndex:(unsigned int)arg1;
- (void)_handleDetailsViewButton:(id)arg1;
- (void)_handleFavoriteButton:(id)arg1;
- (void)_handlePlayButton:(id)arg1;
- (void)_invalidateContent;
- (void)_invalidateContentAlpha;
- (void)_invalidateContentVersion;
- (void)_invalidateIsFavorite;
- (void)_invalidateTransform;
- (void)_updateContent;
- (void)_updateContentAlpha;
- (void)_updateIsFavorite;
- (void)_updateTransform;
- (id)actionPerformer;
- (void)alphaDidChange;
- (id)alphaOverride;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)arg1;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (id)axSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)getDetailedPresentedPlacement:(id)arg1 forItemReference:(id)arg2;
- (id)init;
- (id)initWithModel:(id)arg1;
- (bool)isFavorite;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)referenceSizeDidChange;
- (double)scaleFromTopRightCorner;
- (void)setAlphaOverride:(id)arg1;
- (void)setDetailedPlacementOverride:(id)arg1 forItemReference:(id)arg2;
- (void)setIsFavorite:(bool)arg1;
- (void)setScaleFromTopRightCorner:(double)arg1;
- (id)spec;
- (void)update;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end
