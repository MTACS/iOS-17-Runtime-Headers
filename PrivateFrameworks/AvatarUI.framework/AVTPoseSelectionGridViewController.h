
@interface AVTPoseSelectionGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    <AVTAvatarRecord> * _avatarRecord;
    UIColor * _backgroundColor;
    UIView * _cameraCellView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    <AVTPoseSelectionGridViewControllerDelegate> * _delegate;
    UICollectionViewFlowLayout * _flowLayout;
    AVTUIStickerGeneratorPool * _generatorPool;
    UIImage * _placeholderImage;
    UICollectionView * _poseCollectionView;
    <AVTTaskScheduler> * _scheduler;
    AVTStickerConfiguration * _selectedStickerConfiguration;
    NSArray * _stickerConfigurations;
    NSObject<OS_dispatch_queue> * _stickerGenerationQueue;
    AVTUIStickerRenderer * _stickerRenderer;
    bool  _willDisplayCameraItem;
}

@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIView *cameraCellView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTPoseSelectionGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic, retain) AVTUIStickerGeneratorPool *generatorPool;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, retain) UICollectionView *poseCollectionView;
@property (nonatomic, retain) <AVTTaskScheduler> *scheduler;
@property (nonatomic, retain) AVTStickerConfiguration *selectedStickerConfiguration;
@property (nonatomic, retain) NSArray *stickerConfigurations;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stickerGenerationQueue;
@property (nonatomic, retain) AVTUIStickerRenderer *stickerRenderer;
@property (readonly) Class superclass;
@property (nonatomic) bool willDisplayCameraItem;

- (void).cxx_destruct;
- (id)avatarRecord;
- (id)backgroundColor;
- (id)cameraCellView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)configurationForIndex:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)delegate;
- (id)flowLayout;
- (id)generatorPool;
- (id)initWithAvatarRecord:(id)arg1 poseConfigurations:(id)arg2 allowsCameraCapture:(bool)arg3;
- (id)placeholderImage;
- (id)poseCollectionView;
- (id)scheduler;
- (id)selectedStickerConfiguration;
- (void)setAvatarRecord:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCameraCellView:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setGeneratorPool:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPoseCollectionView:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSelectedStickerConfiguration:(id)arg1;
- (void)setStickerConfigurations:(id)arg1;
- (void)setStickerGenerationQueue:(id)arg1;
- (void)setStickerRenderer:(id)arg1;
- (void)setWillDisplayCameraItem:(bool)arg1;
- (id)stickerConfigurations;
- (id)stickerGenerationQueue;
- (id)stickerRenderer;
- (void)updateFlowLayoutItemSize;
- (void)updateWithAvatarRecord:(id)arg1 stickerConfigurations:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)willDisplayCameraItem;

@end
