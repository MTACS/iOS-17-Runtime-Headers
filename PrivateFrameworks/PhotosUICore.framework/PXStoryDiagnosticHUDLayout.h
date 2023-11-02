
@interface PXStoryDiagnosticHUDLayout : PXGLayout <PXChangeObserver, PXGEntityChangeObserver, PXGStringSource> {
    NSAttributedString * _HUDText;
    unsigned int  _HUDTextSpriteIndex;
    PXStoryAnimationController * _animationController;
    unsigned int  _badgeSpriteIndex;
    NSAttributedString * _badgeText;
    unsigned short  _contentVersion;
    <PXStoryDiagnosticHUDDataSource> * _dataSource;
    bool  _hasPendingContentUpdate;
    PXGLoadingStatusComponent * _loadingStatusComponent;
    PXStoryModel * _model;
    PXStoryRelatedController * _relatedController;
    NSTimer * _timer;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    bool  _wantsHUDContentVisible;
}

@property (nonatomic, retain) NSAttributedString *HUDText;
@property (nonatomic, retain) PXStoryAnimationController *animationController;
@property (nonatomic, readonly) NSAttributedString *badgeText;
@property (nonatomic, readonly) <PXStoryDiagnosticHUDDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXStoryModel *model;
@property (nonatomic, retain) PXStoryRelatedController *relatedController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimer *timer;

- (void).cxx_destruct;
- (id)HUDText;
- (void)_enumerateDiagnosticHUDContentProvidersUsingBlock:(id /* block */)arg1;
- (void)_invalidateContent;
- (void)_invalidateControllers;
- (void)_invalidateModel;
- (bool)_shouldDisplayContentForHUDType:(long long)arg1;
- (void)_updateContent;
- (void)_updateControllers;
- (void)_updateHUDText;
- (void)_updateModel;
- (id)animationController;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)axSpriteIndexes;
- (id)badgeText;
- (id)dataSource;
- (void)dealloc;
- (void)entityManager:(id)arg1 componentDidChange:(id)arg2;
- (void)entityManagerDidChange;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)relatedController;
- (void)safeAreaInsetsDidChange;
- (void)setAnimationController:(id)arg1;
- (void)setHUDText:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setRelatedController:(id)arg1;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)timer;
- (void)update;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end
