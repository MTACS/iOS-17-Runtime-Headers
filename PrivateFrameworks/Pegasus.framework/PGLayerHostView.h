
@interface PGLayerHostView : UIView {
    double  _cornerRadiusScale;
    _UIRemoteView * _remoteView;
    BKSTouchDeliveryPolicyAssertion * _touchDeliveryPolicyAssertion;
}

@property (nonatomic) double cornerRadiusScale;
@property (nonatomic, retain) PGHostedWindowHostingHandle *hostedWindowHostingHandle;

- (void).cxx_destruct;
- (void)_manageSharingOfTouchesBetweenClientAndHostContext;
- (double)cornerRadiusScale;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)hostedWindowHostingHandle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadiusScale:(double)arg1;
- (void)setHostedWindowHostingHandle:(id)arg1;

@end
