
@interface _UISheetPresentationControllerConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    double  __additionalMinimumTopInset;
    double  __cornerRadiusForPresentationAndDismissal;
    long long  __detentDirectionWhenFloating;
    NSArray * __detents;
    _UISheetPresentationControllerAppearance * __edgeAttachedCompactHeightAppearance;
    _UISheetPresentationControllerAppearance * __floatingAppearance;
    double  __grabberTopSpacing;
    double  __hostParentDepthLevel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __hostParentFullHeightUntransformedFrameForDepthLevel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __hostParentStackAlignmentFrame;
    bool  __insetsPresentedViewForGrabber;
    long long  __mode;
    bool  __peeksWhenFloating;
    double  __preferredCornerRadius;
    bool  __prefersGrabberVisible;
    bool  __prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
    bool  __prefersScrollingResizesWhenDetentDirectionIsDown;
    NSString * __selectedDetentIdentifier;
    _UISheetPresentationControllerAppearance * __standardAppearance;
    bool  __wantsEdgeAttachedInCompactHeight;
    bool  __wantsFullScreen;
    bool  __widthFollowsPreferredContentSizeWhenEdgeAttached;
}

@property (setter=_setAdditionalMinimumTopInset:, nonatomic) double _additionalMinimumTopInset;
@property (setter=_setCornerRadiusForPresentationAndDismissal:, nonatomic) double _cornerRadiusForPresentationAndDismissal;
@property (setter=_setDetentDirectionWhenFloating:, nonatomic) long long _detentDirectionWhenFloating;
@property (setter=_setDetents:, nonatomic, copy) NSArray *_detents;
@property (setter=_setEdgeAttachedCompactHeightAppearance:, nonatomic, retain) _UISheetPresentationControllerAppearance *_edgeAttachedCompactHeightAppearance;
@property (setter=_setFloatingAppearance:, nonatomic, retain) _UISheetPresentationControllerAppearance *_floatingAppearance;
@property (setter=_setGrabberTopSpacing:, nonatomic) double _grabberTopSpacing;
@property (setter=_setHostParentDepthLevel:, nonatomic) double _hostParentDepthLevel;
@property (setter=_setHostParentFullHeightUntransformedFrameForDepthLevel:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _hostParentFullHeightUntransformedFrameForDepthLevel;
@property (setter=_setHostParentStackAlignmentFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _hostParentStackAlignmentFrame;
@property (setter=_setInsetsPresentedViewForGrabber:, nonatomic) bool _insetsPresentedViewForGrabber;
@property (setter=_setMode:, nonatomic) long long _mode;
@property (setter=_setPeeksWhenFloating:, nonatomic) bool _peeksWhenFloating;
@property (setter=_setPreferredCornerRadius:, nonatomic) double _preferredCornerRadius;
@property (setter=_prefersGrabberVisible:, nonatomic) bool _prefersGrabberVisible;
@property (setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:, nonatomic) bool _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
@property (setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:, nonatomic) bool _prefersScrollingResizesWhenDetentDirectionIsDown;
@property (setter=_setSelectedDetentIdentifier:, nonatomic, copy) NSString *_selectedDetentIdentifier;
@property (setter=_setStandardAppearance:, nonatomic, retain) _UISheetPresentationControllerAppearance *_standardAppearance;
@property (setter=_setWantsEdgeAttachedInCompactHeight:, nonatomic) bool _wantsEdgeAttachedInCompactHeight;
@property (setter=_setWantsFullScreen:, nonatomic) bool _wantsFullScreen;
@property (setter=_setWidthFollowsPreferredContentSizeWhenEdgeAttached:, nonatomic) bool _widthFollowsPreferredContentSizeWhenEdgeAttached;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_fullScreenConfiguration;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_additionalMinimumTopInset;
- (double)_cornerRadiusForPresentationAndDismissal;
- (long long)_detentDirectionWhenFloating;
- (id)_detents;
- (id)_edgeAttachedCompactHeightAppearance;
- (id)_floatingAppearance;
- (double)_grabberTopSpacing;
- (double)_hostParentDepthLevel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_hostParentFullHeightUntransformedFrameForDepthLevel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_hostParentStackAlignmentFrame;
- (bool)_insetsPresentedViewForGrabber;
- (long long)_mode;
- (bool)_peeksWhenFloating;
- (double)_preferredCornerRadius;
- (bool)_prefersGrabberVisible;
- (void)_prefersGrabberVisible:(bool)arg1;
- (bool)_prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
- (bool)_prefersScrollingResizesWhenDetentDirectionIsDown;
- (id)_selectedDetentIdentifier;
- (void)_setAdditionalMinimumTopInset:(double)arg1;
- (void)_setCornerRadiusForPresentationAndDismissal:(double)arg1;
- (void)_setDetentDirectionWhenFloating:(long long)arg1;
- (void)_setDetents:(id)arg1;
- (void)_setEdgeAttachedCompactHeightAppearance:(id)arg1;
- (void)_setFloatingAppearance:(id)arg1;
- (void)_setGrabberTopSpacing:(double)arg1;
- (void)_setHostParentDepthLevel:(double)arg1;
- (void)_setHostParentFullHeightUntransformedFrameForDepthLevel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setHostParentStackAlignmentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setInsetsPresentedViewForGrabber:(bool)arg1;
- (void)_setMode:(long long)arg1;
- (void)_setPeeksWhenFloating:(bool)arg1;
- (void)_setPreferredCornerRadius:(double)arg1;
- (void)_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:(bool)arg1;
- (void)_setPrefersScrollingResizesWhenDetentDirectionIsDown:(bool)arg1;
- (void)_setSelectedDetentIdentifier:(id)arg1;
- (void)_setStandardAppearance:(id)arg1;
- (void)_setWantsEdgeAttachedInCompactHeight:(bool)arg1;
- (void)_setWantsFullScreen:(bool)arg1;
- (void)_setWidthFollowsPreferredContentSizeWhenEdgeAttached:(bool)arg1;
- (id)_standardAppearance;
- (bool)_wantsEdgeAttachedInCompactHeight;
- (bool)_wantsFullScreen;
- (bool)_widthFollowsPreferredContentSizeWhenEdgeAttached;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
