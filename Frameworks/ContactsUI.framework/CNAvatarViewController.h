
@interface CNAvatarViewController : UIViewController <CNAvatarViewController, CNAvatarViewController_Private, CNSharedProfileAnimatingAvatarView, CUIKAvatarViewControllerProtocol> {
    bool  _allowStaleRendering;
    bool  _isPerformingTransition;
    CNSharedProfileStateOracle * _sharedProfileStateOracle;
    <CNUIObjectViewControllerDelegate> * objectViewControllerDelegate;
}

@property (nonatomic) bool allowStaleRendering;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAvatarViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImageView *destinationAvatarImageView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPerformingTransition;
@property (nonatomic, readonly) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic) <CNUIObjectViewControllerDelegate> *objectViewControllerDelegate;
@property (nonatomic, retain) CNSharedProfileStateOracle *sharedProfileStateOracle;
@property (nonatomic, readonly) CALayer *sourceAvatarLayer;
@property (readonly) Class superclass;
@property (getter=isThreeDTouchEnabled, nonatomic) bool threeDTouchEnabled;
@property (nonatomic, readonly) UIView *view;

+ (Class)defaultImplementation;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(bool)arg1;

- (void).cxx_destruct;
- (bool)allowStaleRendering;
- (id)descriptorForRequiredKeys;
- (id)destinationAvatarImageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSettings:(id)arg1;
- (bool)isPerformingTransition;
- (id)objectViewControllerDelegate;
- (void)performTransitionAnimationWithCompletion:(id /* block */)arg1;
- (void)performTransitionAnimationWithStartHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setAllowStaleRendering:(bool)arg1;
- (void)setIsPerformingTransition:(bool)arg1;
- (void)setObjectViewControllerDelegate:(id)arg1;
- (void)setSharedProfileStateOracle:(id)arg1;
- (id)sharedProfileStateOracle;
- (id)sourceAvatarLayer;
- (void)updateViewWithGroupIdentity:(id)arg1;

@end
