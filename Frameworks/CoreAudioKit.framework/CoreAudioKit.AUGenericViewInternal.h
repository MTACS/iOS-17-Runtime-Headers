
@interface CoreAudioKit.AUGenericViewInternal : UIView <UICollectionViewDelegate> {
    void auAudioUnit;
    void collectionView;
    void dataSource;
    void hasGroups;
    void owningController;
    void paramDictionary;
    void paramObserverToken;
    void pathsNeedingPeriodicUpdates;
    void scheduledUpdatesTimer;
    void showSingleClumpIndex;
    void widthInfo;
}

@property (nonatomic, retain) AUAudioUnit *auAudioUnit;
@property (nonatomic, retain) UIViewController *owningController;
@property (nonatomic) void*paramObserverToken;

- (void).cxx_destruct;
- (id)auAudioUnit;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)owningController;
- (void*)paramObserverToken;
- (void)removeFromSuperview;
- (void)removeScheduledUpdatesTimer;
- (void)setAuAudioUnit:(id)arg1;
- (void)setOwningController:(id)arg1;
- (void)setParamObserverToken:(void*)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
