
@interface CKPinnedConversationTapbackBubble : UIView <CKPinnedConversationActivityItemView> {
    long long  _activityItemViewContentScale;
    <CKPinnedConversationActivityItemViewDelegate> * _activityItemViewDelegate;
    CKPinnedConversationActivityItemViewBackdropLayer * _backdropLayer;
    CAShapeLayer * _backdropMaskShapeLayer;
    CKPinnedConversationActivityItemViewShadowLayer * _broadShadowLayer;
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
    double  _preferredTailAttachmentPointXCoordinate;
    CKPinnedConversationTapbackBubbleActivityItem * _tapbackActivityItem;
    CKAcknowledgmentGlyphView * _tapbackGlyph;
    CKPinnedConversationActivityItemViewShadowLayer * _tightShadowLayer;
}

@property (nonatomic) long long acknowledgmentType;
@property (nonatomic, retain) <CKPinnedConversationActivityItem> *activityItem;
@property (nonatomic) long long activityItemViewContentScale;
@property (nonatomic) <CKPinnedConversationActivityItemViewDelegate> *activityItemViewDelegate;
@property (nonatomic, retain) CKPinnedConversationActivityItemViewBackdropLayer *backdropLayer;
@property (nonatomic, retain) CAShapeLayer *backdropMaskShapeLayer;
@property (nonatomic, retain) CKPinnedConversationActivityItemViewShadowLayer *broadShadowLayer;
@property (nonatomic) long long originationDirection;
@property (nonatomic) long long originationHorizontalDirection;
@property (nonatomic) struct CGPoint { double x1; double x2; } originationPoint;
@property (nonatomic) struct CGSize { double x1; double x2; } parentAvatarViewSize;
@property (nonatomic) double preferredTailAttachmentPointXCoordinate;
@property (nonatomic, readonly) bool supportsActivityItemViewContentScale;
@property (nonatomic, readonly) bool supportsAlignmentWithOriginationSubAvatarFrame;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } tailAttachmentPoint;
@property (nonatomic, readonly) CKPinnedConversationTapbackBubbleActivityItem *tapbackActivityItem;
@property (nonatomic, retain) CKAcknowledgmentGlyphView *tapbackGlyph;
@property (nonatomic, retain) CKPinnedConversationActivityItemViewShadowLayer *tightShadowLayer;

+ (BOOL)colorTypeForTapBack:(long long)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })largeTailBalloonFrameForSize:(struct CGSize { double x1; double x2; })arg1 flipHorizontally:(bool)arg2 flipVertically:(bool)arg3;
+ (struct CGSize { double x1; double x2; })largeTailBalloonSizeForSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 flipHorizontally:(bool)arg2 flipVertically:(bool)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })smallTailBalloonFrameForSize:(struct CGSize { double x1; double x2; })arg1 flipHorizontally:(bool)arg2 flipVertically:(bool)arg3;
+ (struct CGSize { double x1; double x2; })smallTailBalloonSizeForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)tapBackBubblePathForSize:(struct CGSize { double x1; double x2; })arg1 tapbackBalloonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 flipHorizontally:(bool)arg3 flipVertically:(bool)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tapbackBalloonFrameForSize:(struct CGSize { double x1; double x2; })arg1 flipHorizontally:(bool)arg2 flipVertically:(bool)arg3;
+ (struct CGSize { double x1; double x2; })tapbackBalloonSizeForSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (void)_updateAcknowledgmentType;
- (void)_updateUserInterfaceStyles;
- (long long)acknowledgmentType;
- (id)activityItem;
- (double)activityItemToContactItemVerticalOverlap;
- (long long)activityItemViewContentScale;
- (id)activityItemViewDelegate;
- (id)backdropLayer;
- (id)backdropMaskShapeLayer;
- (id)broadShadowLayer;
- (bool)flipHorizontally;
- (bool)flipVertically;
- (id)initWithActivityItem:(id)arg1;
- (void)layoutSubviews;
- (long long)originationDirection;
- (long long)originationHorizontalDirection;
- (struct CGPoint { double x1; double x2; })originationPoint;
- (struct CGSize { double x1; double x2; })parentAvatarViewSize;
- (double)preferredTailAttachmentPointXCoordinate;
- (void)setAcknowledgmentType:(long long)arg1;
- (void)setActivityItem:(id)arg1;
- (void)setActivityItemViewContentScale:(long long)arg1;
- (void)setActivityItemViewDelegate:(id)arg1;
- (void)setBackdropLayer:(id)arg1;
- (void)setBackdropMaskShapeLayer:(id)arg1;
- (void)setBroadShadowLayer:(id)arg1;
- (void)setOriginationDirection:(long long)arg1;
- (void)setOriginationHorizontalDirection:(long long)arg1;
- (void)setOriginationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setParentAvatarViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredTailAttachmentPointXCoordinate:(double)arg1;
- (void)setTapbackGlyph:(id)arg1;
- (void)setTightShadowLayer:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsActivityItemViewContentScale;
- (bool)supportsAlignmentWithOriginationSubAvatarFrame;
- (struct CGPoint { double x1; double x2; })tailAttachmentPoint;
- (id)tapbackActivityItem;
- (id)tapbackGlyph;
- (id)tightShadowLayer;
- (void)traitCollectionDidChange:(id)arg1;

@end
