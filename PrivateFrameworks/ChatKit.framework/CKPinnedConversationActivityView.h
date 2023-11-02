
@interface CKPinnedConversationActivityView : UIView <CKPinnedConversationActivityItemViewDelegate> {
    CAShapeLayer * _activityItemAttachmentCircleDebugLayer;
    long long  _activityItemOriginationDirection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _activityItemOriginationPoint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _activityItemOriginationSubAvatarFrame;
    NSMutableArray * _activityItemViews;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _avatarFrame;
    NSMutableArray * _contactItemViews;
    CAShapeLayer * _innerContentAlignmentDebugLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _innerContentAlignmentFrame;
    CKPinnedConversationActivitySnapshot * _latestSnapshot;
    CAShapeLayer * _originationPointDebugLayer;
    CAShapeLayer * _outerContentAlignmentDebugLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outerContentAlignmentFrame;
    bool  _showContentAlignmentDebugFrames;
    bool  _suppressingActivity;
}

@property (nonatomic, retain) CAShapeLayer *activityItemAttachmentCircleDebugLayer;
@property (nonatomic) long long activityItemOriginationDirection;
@property (nonatomic) struct CGPoint { double x1; double x2; } activityItemOriginationPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activityItemOriginationSubAvatarFrame;
@property (nonatomic, retain) NSMutableArray *activityItemViews;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } avatarFrame;
@property (nonatomic, retain) NSMutableArray *contactItemViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedContacts;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAShapeLayer *innerContentAlignmentDebugLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } innerContentAlignmentFrame;
@property (nonatomic, retain) CKPinnedConversationActivitySnapshot *latestSnapshot;
@property (nonatomic, retain) CAShapeLayer *originationPointDebugLayer;
@property (nonatomic, retain) CAShapeLayer *outerContentAlignmentDebugLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outerContentAlignmentFrame;
@property (nonatomic) bool showContentAlignmentDebugFrames;
@property (readonly) Class superclass;
@property (getter=isSuppressingActivity, nonatomic) bool suppressingActivity;

- (void).cxx_destruct;
- (id)_activityItemViewWithActivityItemIdentifier:(id)arg1;
- (struct CGPoint { double x1; double x2; })_convertPointInOwnCoordinateSpace:(struct CGPoint { double x1; double x2; })arg1 toUnscaledCoordinateSpaceOfSubview:(id)arg2;
- (void)_layoutUnattachedContactItemViews:(id)arg1 withContentScale:(id)arg2 applyingTransform:(bool)arg3;
- (void)_layoutViewsAssociatedWithActivityItemViews:(id)arg1 excludingContactItemViews:(id)arg2 withContentScale:(id)arg3 applyingTransform:(bool)arg4 updatingActivityItemViews:(bool)arg5 updatingAttachedContactItemViews:(bool)arg6;
- (id)_presentedActivityItems;
- (id)_unattachedContactItemViews;
- (void)_updateSnapshotAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)activityItemAttachmentCircleDebugLayer;
- (double)activityItemAttachmentCircleRadiusInsetForAvatarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)activityItemOriginationDirection;
- (struct CGPoint { double x1; double x2; })activityItemOriginationPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activityItemOriginationSubAvatarFrame;
- (void)activityItemViewNeedsResize:(id)arg1;
- (id)activityItemViews;
- (long long)activityViewContentAlignmentForContactItemAlignment:(long long)arg1;
- (void)applySnapshot:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarFrame;
- (double)circleXCoordinateForYCoordinate:(double)arg1 radius:(double)arg2 centerPoint:(struct CGPoint { double x1; double x2; })arg3 contentAlignment:(long long)arg4;
- (double)contactItemViewCenterXCoordinateForYCoordinate:(double)arg1 avatarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentAlignment:(long long)arg3;
- (double)contactItemViewDiameterForAvatarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)contactItemViewMatchingContactItemIdentifier:(id)arg1 fromContactItemViews:(id)arg2;
- (id)contactItemViews;
- (id)displayedContacts;
- (bool)haveAttachedContactItemViewsForActivityViews:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)innerContentAlignmentDebugLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })innerContentAlignmentFrame;
- (bool)isSuppressingActivity;
- (id)latestSnapshot;
- (void)layoutSubviews;
- (bool)nextContactItemIsClockwiseForOriginationDirection:(long long)arg1 contactItemAlignment:(long long)arg2;
- (id)originationPointDebugLayer;
- (id)outerContentAlignmentDebugLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outerContentAlignmentFrame;
- (struct CGPoint { double x1; double x2; })pointAlongCircle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atArcLength:(double)arg2 fromPoint:(struct CGPoint { double x1; double x2; })arg3 clockwise:(bool)arg4;
- (void)resetToEmptySnapshot;
- (void)setActivityItemAttachmentCircleDebugLayer:(id)arg1;
- (void)setActivityItemOriginationDirection:(long long)arg1;
- (void)setActivityItemOriginationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setActivityItemOriginationSubAvatarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActivityItemViews:(id)arg1;
- (void)setAvatarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContactItemViews:(id)arg1;
- (void)setInnerContentAlignmentDebugLayer:(id)arg1;
- (void)setInnerContentAlignmentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLatestSnapshot:(id)arg1;
- (void)setOriginationPointDebugLayer:(id)arg1;
- (void)setOuterContentAlignmentDebugLayer:(id)arg1;
- (void)setOuterContentAlignmentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShowContentAlignmentDebugFrames:(bool)arg1;
- (void)setSuppressingActivity:(bool)arg1;
- (void)setSuppressingActivity:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)showContentAlignmentDebugFrames;
- (double)tailAttachmentXCoordinateForYCoordinate:(double)arg1 avatarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentAlignment:(long long)arg3;

@end
