
@interface PXStoryTimelineLayout : PXGAbsoluteCompositeLayout <PXChangeObserver, PXTapToRadarDiagnosticProvider> {
    NSMutableIndexSet * _clipIdentifiers;
    NSMutableOrderedSet * _clipLayoutReuseIdentifiers;
    NSMutableDictionary * _clipLayoutReuseIdentifiersByClipIdentifier;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _clippingInsets;
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _clipsCornerRadius;
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _cornerRadius;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _displayedTimeRange;
    <PXStoryTimeline> * _displayedTimeline;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _displayedTimelineRect;
    bool  _isUpdatingTimelineContent;
    PXStoryViewModeTransition * _presentedTimelineTransition;
    double  _relativeZPositionAboveLegibilityGradients;
    NSIndexSet * _supportedResourceKindsForClipLayouts;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } clippingInsets;
@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } clipsCornerRadius;
@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } displayedTimeRange;
@property (nonatomic, retain) <PXStoryTimeline> *displayedTimeline;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } displayedTimelineRect;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXStoryTimelineLayoutSnapshot *presentedSnapshot;
@property (nonatomic, retain) PXStoryViewModeTransition *presentedTimelineTransition;
@property (nonatomic) double relativeZPositionAboveLegibilityGradients;
@property (nonatomic, readonly) bool shouldSetContentSizeToReferenceSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSIndexSet *supportedResourceKindsForClipLayouts;
@property (nonatomic, readonly) long long viewMode;

- (void).cxx_destruct;
- (void)_invalidateContent;
- (long long)_sublayoutIndexForClipWithIdentifier:(long long)arg1;
- (void)_updateContent;
- (void)alphaDidChange;
- (double)alphaForClipLayout:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })clippingInsets;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })clipsCornerRadius;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (void)configureClipLayout:(id)arg1;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })cornerRadius;
- (void)didUpdate;
- (void)didUpdateClipLayout:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)didUpdateTimelineContent;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })displayedTimeRange;
- (void)displayedTimeRangeDidChange;
- (id)displayedTimeline;
- (void)displayedTimelineDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })displayedTimelineRect;
- (void)displayedTimelineRectDidChange;
- (void)enumerateClipLayouts:(id /* block */)arg1;
- (id)existingLayoutForClipWithIdentifier:(long long)arg1;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)presentedSnapshot;
- (id)presentedTimelineTransition;
- (double)proposedZPositionForClipLayoutWithClipIdentifier:(long long)arg1;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (double)relativeZPositionAboveLegibilityGradients;
- (void)setClippingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setClipsCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setDisplayedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setDisplayedTimeline:(id)arg1;
- (void)setDisplayedTimelineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentedTimelineTransition:(id)arg1;
- (void)setRelativeZPositionAboveLegibilityGradients:(double)arg1;
- (bool)shouldSetContentSizeToReferenceSize;
- (id)supportedResourceKindsForClipLayouts;
- (void)update;
- (long long)viewMode;
- (void)willUpdate;
- (void)willUpdateTimelineContent;

@end
