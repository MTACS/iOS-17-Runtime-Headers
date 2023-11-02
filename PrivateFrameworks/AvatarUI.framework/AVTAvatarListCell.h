
@interface AVTAvatarListCell : UICollectionViewCell <AVTAvatarTransitionModel> {
    <AVTAvatarRecord> * _avatar;
    AVTView * _avtView;
    AVTStickerConfiguration * _configuration;
    AVTImageTransitioningContainerView * _containerView;
}

@property (nonatomic) struct CGSize { double x1; double x2; } aspectRatio;
@property (nonatomic, retain) <AVTAvatarRecord> *avatar;
@property (nonatomic, retain) AVTView *avtView;
@property (nonatomic, readonly) UIView *avtViewContainer;
@property (nonatomic, retain) AVTStickerConfiguration *configuration;
@property (nonatomic, readonly) AVTImageTransitioningContainerView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)applyBaseAlpha;
- (void)applyFullAlpha;
- (struct CGSize { double x1; double x2; })aspectRatio;
- (id)avatar;
- (id)avtView;
- (id)avtViewContainer;
- (void)beginUsingAVTViewFromSession:(id)arg1;
- (id)configuration;
- (id)containerView;
- (void)downcastWithCellHandler:(id /* block */)arg1 listCellHandler:(id /* block */)arg2;
- (void)endUsingAVTView;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)liveView;
- (void)prepareForReuse;
- (void)setAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setAvatar:(id)arg1;
- (void)setAvtView:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setImageViewVisible:(bool)arg1;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;

@end
