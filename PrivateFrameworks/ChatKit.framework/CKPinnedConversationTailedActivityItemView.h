
@interface CKPinnedConversationTailedActivityItemView : UIView <CKPinnedConversationActivityItemView> {
    <CKPinnedConversationActivityItem> * _activityItem;
    long long  _activityItemViewContentScale;
    <CKPinnedConversationActivityItemViewDelegate> * _activityItemViewDelegate;
    CKPinnedConversationActivityItemViewBackdropLayer * _backdropLayer;
    CAShapeLayer * _backdropMaskShapeLayer;
    CKPinnedConversationActivityItemViewShadowLayer * _broadShadowLayer;
    UIView * _contentView;
    CAShapeLayer * _contentViewStrokeLayer;
    long long  _originationDirection;
    long long  _originationHorizontalDirection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originationPoint;
    struct CGSize { 
        double width; 
        double height; 
    }  _parentAvatarViewSize;
    double  _pillCornerRadius;
    double  _preferredTailAttachmentPointXCoordinate;
    CKPinnedConversationActivityItemViewShadowLayer * _tightShadowLayer;
}

@property (nonatomic, retain) <CKPinnedConversationActivityItem> *activityItem;
@property (nonatomic) long long activityItemViewContentScale;
@property (nonatomic) <CKPinnedConversationActivityItemViewDelegate> *activityItemViewDelegate;
@property (nonatomic, retain) CKPinnedConversationActivityItemViewBackdropLayer *backdropLayer;
@property (nonatomic, retain) CAShapeLayer *backdropMaskShapeLayer;
@property (nonatomic, retain) CKPinnedConversationActivityItemViewShadowLayer *broadShadowLayer;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) long long contentViewContentMode;
@property (nonatomic, readonly) double contentViewHorizontalInsetForPillCornerRadius;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentViewPadding;
@property (nonatomic, retain) CAShapeLayer *contentViewStrokeLayer;
@property (nonatomic) long long originationDirection;
@property (nonatomic) long long originationHorizontalDirection;
@property (nonatomic) struct CGPoint { double x1; double x2; } originationPoint;
@property (nonatomic) struct CGSize { double x1; double x2; } parentAvatarViewSize;
@property (nonatomic, readonly) double pillCornerRadius;
@property (nonatomic) double preferredTailAttachmentPointXCoordinate;
@property (nonatomic, readonly) bool supportsActivityItemViewContentScale;
@property (nonatomic, readonly) bool supportsAlignmentWithOriginationSubAvatarFrame;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } tailAttachmentPoint;
@property (nonatomic, retain) CKPinnedConversationActivityItemViewShadowLayer *tightShadowLayer;

- (void).cxx_destruct;
- (id)_pathForTailedBalloonSegmentWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 anchorPoint:(struct CGPoint { double x1; double x2; })arg3 originationHorizontalDirection:(long long)arg4 originationDirection:(long long)arg5;
- (void)_updateUserInterfaceStyles;
- (id)activityItem;
- (double)activityItemToContactItemVerticalOverlap;
- (long long)activityItemViewContentScale;
- (id)activityItemViewDelegate;
- (id)backdropLayer;
- (id)backdropMaskShapeLayer;
- (double)balloonCornerRadius;
- (double)balloonTailHeight;
- (double)balloonTailRadius;
- (double)balloonTailWidth;
- (id)broadShadowLayer;
- (id)contentView;
- (long long)contentViewContentMode;
- (double)contentViewHorizontalInsetForPillCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewPadding;
- (id)contentViewStrokeLayer;
- (id)initWithActivityItem:(id)arg1 contentView:(id)arg2 needsContentViewStroke:(bool)arg3;
- (void)layoutSubviews;
- (long long)originationDirection;
- (long long)originationHorizontalDirection;
- (struct CGPoint { double x1; double x2; })originationPoint;
- (struct CGSize { double x1; double x2; })parentAvatarViewSize;
- (double)pillCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pillRect;
- (double)preferredTailAttachmentPointXCoordinate;
- (void)setActivityItem:(id)arg1;
- (void)setActivityItemViewContentScale:(long long)arg1;
- (void)setActivityItemViewDelegate:(id)arg1;
- (void)setBackdropLayer:(id)arg1;
- (void)setBackdropMaskShapeLayer:(id)arg1;
- (void)setBroadShadowLayer:(id)arg1;
- (void)setContentViewStrokeLayer:(id)arg1;
- (void)setOriginationDirection:(long long)arg1;
- (void)setOriginationHorizontalDirection:(long long)arg1;
- (void)setOriginationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setParentAvatarViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredTailAttachmentPointXCoordinate:(double)arg1;
- (void)setTightShadowLayer:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsActivityItemViewContentScale;
- (bool)supportsAlignmentWithOriginationSubAvatarFrame;
- (struct CGPoint { double x1; double x2; })tailAttachmentPoint;
- (struct CGPoint { double x1; double x2; })tailAttachmentPointWithOutputForMinimumContinousAnchorX:(double*)arg1 maximumContinuousAnchorX:(double*)arg2;
- (id)tightShadowLayer;
- (void)traitCollectionDidChange:(id)arg1;

@end
