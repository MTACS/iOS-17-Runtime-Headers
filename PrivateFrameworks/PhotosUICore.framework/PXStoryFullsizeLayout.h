
@interface PXStoryFullsizeLayout : PXStoryModelTimelineLayout <PXChangeObserver, PXGEntityChangeObserver, PXStoryTransitionSource, PXTapToRadarDiagnosticProvider> {
    struct { 
        long long fromSegmentIdentifier; 
        long long toSegmentIdentifier; 
    }  _activeTransition;
    bool  _allowsTransitionEffects;
    PXGEffect * _auxiliaryTransitionEffect;
    double  _auxiliaryTransitionEffectAlpha;
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
    }  _cornerRadiusOverride;
    <PXStoryStyleDescriptor> * _overrideStyleInfo;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _postUpdateFlags;
    NSMutableIndexSet * _previouslyReportedClipIdentifiers;
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
    }  _strictVisibleTimeRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _strictVisibleTimelineRect;
    double  _textAlpha;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _timelineContentPostUpdateFlags;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _timelineContentUpdateFlags;
    unsigned int  _transitionAuxiliaryEffectSpriteIndex;
    PXStoryTransitionController * _transitionController;
    PXGEffect * _transitionEffect;
    double  _transitionEffectAlpha;
    unsigned int  _transitionEffectSpriteIndex;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    NSDictionary * _zPositionsByClipIdentifier;
}

@property (nonatomic) struct { long long x1; long long x2; } activeTransition;
@property (nonatomic, retain) PXGEffect *auxiliaryTransitionEffect;
@property (nonatomic) double auxiliaryTransitionEffectAlpha;
@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } cornerRadiusOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXStoryStyleDescriptor> *overrideStyleInfo;
@property (nonatomic, readonly) NSMutableIndexSet *previouslyReportedClipIdentifiers;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } strictVisibleTimeRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } strictVisibleTimelineRect;
@property (readonly) Class superclass;
@property (nonatomic) double textAlpha;
@property (nonatomic, retain) PXStoryTransitionController *transitionController;
@property (nonatomic, retain) PXGEffect *transitionEffect;
@property (nonatomic) double transitionEffectAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionViewport;
@property (nonatomic, retain) NSDictionary *zPositionsByClipIdentifier;

- (void).cxx_destruct;
- (void)_invalidateActiveTransition;
- (void)_invalidateClipZPositions;
- (void)_invalidateTransitionController;
- (void)_invalidateTransitionEffectSprites;
- (void)_invalidateVisibleClipsReporting;
- (void)_invalidateVisibleSegmentIdentifiers;
- (void)_updateActiveTransition;
- (void)_updateClipZPositions;
- (void)_updateTransitionController;
- (void)_updateTransitionEffectSprites;
- (void)_updateVisibleClipsReporting;
- (void)_updateVisibleSegmentIdentifiers;
- (struct { long long x1; long long x2; })activeTransition;
- (double)alphaForClipLayout:(id)arg1;
- (void)applyTransitionEffectAlpha:(double)arg1 auxiliaryEffectAlpha:(double)arg2;
- (id)auxiliaryTransitionEffect;
- (double)auxiliaryTransitionEffectAlpha;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (void)configureClipLayout:(id)arg1;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })cornerRadiusOverride;
- (void)didBeginTransitionWithEffect:(id)arg1 auxiliaryEffect:(id)arg2;
- (void)didEndTransitionWithEffect:(id)arg1 auxiliaryEffect:(id)arg2;
- (void)didUpdateTimelineContent;
- (void)displayedTimelineDidChange;
- (void)entityManager:(id)arg1 componentDidChange:(id)arg2;
- (void)entityManagerDidChange;
- (void)getDetailedPresentedPlacement:(id)arg1 forItemReference:(id)arg2;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 overrideStyleInfo:(id)arg2;
- (bool)isAnimating;
- (id)layoutForClipWithIdentifier:(long long)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)overrideStyleInfo;
- (id)presentedSnapshot;
- (id)previouslyReportedClipIdentifiers;
- (double)proposedZPositionForClipLayoutWithClipIdentifier:(long long)arg1;
- (void)referenceSizeDidChange;
- (void)setActiveTransition:(struct { long long x1; long long x2; })arg1;
- (void)setAuxiliaryTransitionEffect:(id)arg1;
- (void)setAuxiliaryTransitionEffectAlpha:(double)arg1;
- (void)setCornerRadiusOverride:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setDetailedPlacementOverride:(id)arg1 forItemReference:(id)arg2;
- (void)setStrictVisibleTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setStrictVisibleTimelineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextAlpha:(double)arg1;
- (void)setTransitionController:(id)arg1;
- (void)setTransitionEffect:(id)arg1;
- (void)setTransitionEffectAlpha:(double)arg1;
- (void)setZPositionsByClipIdentifier:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })strictVisibleTimeRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strictVisibleTimelineRect;
- (double)textAlpha;
- (id)transitionController;
- (id)transitionEffect;
- (double)transitionEffectAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionViewport;
- (void)update;
- (void)updateClipsCornerRadius;
- (void)updateDisplayedTimeRange;
- (void)updateDisplayedTimeline;
- (void)updateDisplayedTimelineRect;
- (void)updatePresentedTimelineTransition;
- (long long)viewMode;
- (void)willUpdateTimelineContent;
- (id)zPositionsByClipIdentifier;

@end
