
@interface _MKStackingContentView : _MKUIViewControllerRootView <MKVibrantGroup> {
    NSLayoutConstraint * _bottomConstraint;
    UIView * _bottomView;
    NSLayoutConstraint * _middleConstraint;
    NSLayoutConstraint * _topConstraint;
    UIView * _topView;
}

@property (nonatomic, readonly) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, retain) UIView *bottomView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topView;

- (void).cxx_destruct;
- (id)bottomConstraint;
- (id)bottomView;
- (id)initWithViewController:(id)arg1;
- (void)setBottomView:(id)arg1;
- (void)setTopView:(id)arg1;
- (id)topView;
- (void)updateConstraints;
- (id)vibrancyGroupName;

@end
