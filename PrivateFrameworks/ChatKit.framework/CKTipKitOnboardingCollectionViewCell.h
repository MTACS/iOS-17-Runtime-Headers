
@interface CKTipKitOnboardingCollectionViewCell : UICollectionViewCell <CNAvatarViewDelegate> {
    NSMutableArray * _avatarViews;
    NSArray * _layerNames;
    UIView * _micaView;
    CAPackage * _package;
    CALayer * _packageLayer;
    NSArray * _recommendedPinningConversations;
    long long  _state;
    CAStateController * _stateController;
    UIView * _tipUIView;
}

@property (nonatomic, retain) NSMutableArray *avatarViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layerNames;
@property (nonatomic, retain) UIView *micaView;
@property (nonatomic, retain) CAPackage *package;
@property (nonatomic, retain) CALayer *packageLayer;
@property (nonatomic, retain) NSArray *recommendedPinningConversations;
@property (nonatomic) long long state;
@property (nonatomic, retain) CAStateController *stateController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *tipUIView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)avatarViews;
- (void)dealloc;
- (void)didEndDisplaying;
- (void)didUpdateContentForAvatarView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layerNames;
- (id)micaView;
- (id)package;
- (id)packageLayer;
- (void)prepareForReuse;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)recommendedPinningConversations;
- (void)resetViews;
- (void)setAvatarViews:(id)arg1;
- (void)setLayerNames:(id)arg1;
- (void)setMicaView:(id)arg1;
- (void)setPackage:(id)arg1;
- (void)setPackageLayer:(id)arg1;
- (void)setRecommendedPinningConversations:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStateController:(id)arg1;
- (void)setTipUIView:(id)arg1;
- (void)setTipUIView:(id)arg1 withRecommendedPinningConversations:(id)arg2;
- (void)startAnimations;
- (long long)state;
- (id)stateController;
- (void)stepThroughOnboardingTipAnimationForLayer:(id)arg1;
- (void)stopAnimations;
- (id)tipUIView;
- (void)updateTipAnimationIfNeeded;
- (void)willDisplayCell;

@end
