
@interface APPCPromotedContentView : UIView <NewsTransparencyViewControllerDelegate, SFSafariViewControllerDelegate> {
    void customPrivacyHandling;
    void dimmerView;
    void expandedAdFrame;
    void expandedAdTapGestureRecognizer;
    void interactionDelegate;
    void interactionPresentationDelegate;
    void lastPerformedAction;
    void overriddenPrivacyMarkerPosition;
    void placement;
    void privacyMarkerView;
    void promotedContent;
    void readiness;
    void shouldBlockNavigation;
    void shouldCollapseOnRotation;
    void tapGestureRecognizer;
    void tapWasRecognized;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  videoActionTimestamp;
    void videoMoreLocation;
    void videoTapAction;
    void visiblePercentage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) long long readiness;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)newsTransparencyViewControllerDidDismiss:(id)arg1;
- (long long)readiness;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setReadiness:(long long)arg1;
- (void)sizeCategoryChanged:(id)arg1;
- (void)tapRecognized:(id)arg1;
- (void)tappedPrivacyMarker:(id)arg1;

@end
