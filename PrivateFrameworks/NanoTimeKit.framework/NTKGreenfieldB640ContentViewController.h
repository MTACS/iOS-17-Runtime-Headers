
@interface NTKGreenfieldB640ContentViewController : BPSWelcomeOptinViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    UICollectionViewFlowLayout * _collectionViewFlowLayout;
    UICollectionView * _facesCollectionView;
    NTKGreenfieldB640Model * _greenfieldB640Model;
    <NTKGreenfieldB640ContentViewControllerDelegate> * _greenfieldB640delegate;
    unsigned long long  _state;
    UIImage * _watchBandImage;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKGreenfieldB640ContentViewControllerDelegate> *greenfieldB640delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultBandNameForCurrentPairedDevice;
- (void)_didTapShowInternalErrorButton;
- (void)_notifyDelegateOfActionEventWatchFaceSelected:(id)arg1;
- (void)_presentErrorAlert;
- (void)_setupContentForAddWathFaceWithBandImagePath:(id)arg1 bundle:(id)arg2;
- (void)_setupViews;
- (id)_subtitleForError:(id)arg1;
- (id)_titleForError:(id)arg1;
- (void)_updateSelectedState:(bool)arg1 forCellAtIndexPath:(id)arg2;
- (void)alternateButtonPressed:(id)arg1;
- (id)alternateButtonTitle;
- (struct CGSize { double x1; double x2; })cellSize;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)detailString;
- (id)greenfieldB640delegate;
- (void)handleWatchFaceSelectedAtIndex:(long long)arg1;
- (void)handleWatchFaceSelectedWithError:(id)arg1;
- (id)initForAddWatchFacesStateWithGreenfieldB640Model:(id)arg1;
- (id)initForErrorStateWithGreenfieldB640Model:(id)arg1;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGreenfieldB640delegate:(id)arg1;
- (void)suggestedButtonPressed:(id)arg1;
- (id)suggestedButtonTitle;
- (id)titleString;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
