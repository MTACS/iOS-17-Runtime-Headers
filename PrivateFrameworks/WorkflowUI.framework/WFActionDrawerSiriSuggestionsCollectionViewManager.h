
@interface WFActionDrawerSiriSuggestionsCollectionViewManager : NSObject <MPMediaPickerControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    NSArray * _actions;
    long long  _cellType;
    UICollectionView * _collectionView;
    bool  _configuredForDailyRoutines;
    UIViewController * _containingViewController;
    <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> * _delegate;
    NSArray * _donations;
    WFAction * _genericAction;
    NSString * _genericActionParameterTitle;
    INIntent * _genericIntent;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic) long long cellType;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) bool configuredForDailyRoutines;
@property (nonatomic) UIViewController *containingViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *donations;
@property (nonatomic, retain) WFAction *genericAction;
@property (nonatomic, copy) NSString *genericActionParameterTitle;
@property (nonatomic, retain) INIntent *genericIntent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 withDonation:(id)arg2 cellType:(long long)arg3;
- (void)_configureCell:(id)arg1 withGenericIntent:(id)arg2 cellType:(long long)arg3 genericParameterTitle:(id)arg4;
- (id)actions;
- (long long)cellType;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)configuredForDailyRoutines;
- (id)containingViewController;
- (id)delegate;
- (id)donations;
- (id)genericAction;
- (id)genericActionParameterTitle;
- (id)genericIntent;
- (id)initWithCollectionView:(id)arg1 cellType:(long long)arg2 donations:(id)arg3 actions:(id)arg4;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)setActions:(id)arg1;
- (void)setCellType:(long long)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setConfiguredForDailyRoutines:(bool)arg1;
- (void)setContainingViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDonations:(id)arg1;
- (void)setGenericAction:(id)arg1;
- (void)setGenericActionParameterTitle:(id)arg1;
- (void)setGenericIntent:(id)arg1;
- (void)showMusicPicker;
- (void)showPodcastPicker;

@end
