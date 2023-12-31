
@interface TSDLayout : TSDAbstractLayout <TSDAttachmentLayout, TSKSearchTarget> {
    struct CGPoint { 
        double x; 
        double y; 
    }  mBaseAlignmentFrameOriginForFixingInterimPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  mBaseCapturedAlignmentFrameOriginForInline;
    TSDLayoutGeometry * mBaseGeometry;
    struct CGPoint { 
        double x; 
        double y; 
    }  mCapturedAlignmentFrameOriginForInline;
    struct CGPoint { 
        double x; 
        double y; 
    }  mCapturedInfoGeometryPositionForInline;
    NSMutableSet * mConnectedLayouts;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mDirtyRect;
    bool  mHasFinishedIterativePositioning;
    NSObject<TSDInfo> * mInfo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mInitialBoundsForStandardKnobs;
    struct { 
        unsigned int position : 1; 
        unsigned int size : 1; 
    }  mInvalidFlags;
    id  mIterativePositioningState;
    int  mLayoutState;
}

@property (nonatomic, readonly) bool attachmentLayoutDisplacedByDropCap;
@property (nonatomic, readonly) bool canAspectRatioLockBeChangedByUser;
@property (nonatomic, readonly) NSSet *connectedLayouts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) TSDLayoutGeometry *dynamicGeometry;
@property (nonatomic, readonly) bool hasFinishedIterativePositioning;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<TSDInfo> *info;
@property (nonatomic, readonly) bool invalidGeometry;
@property (nonatomic, readonly) bool isStrokeBeingManipulated;
@property (nonatomic, retain) id iterativePositioningState;
@property (nonatomic, readonly) int layoutState;
@property (nonatomic, readonly) TSDLayoutGeometry *originalGeometry;
@property (nonatomic, readonly) bool resizeMayChangeAspectRatio;
@property (readonly) Class superclass;

+ (id)descendentWrappablesOfLayout:(id)arg1;

- (void)addConnectedLayout:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)additionalGuides;
- (id)additionalLayoutsForRepCreation;
- (struct CGPoint { double x1; double x2; })alignmentFrameOriginForFixingInterimPosition;
- (bool)allowsConnections;
- (bool)attachmentLayoutDisplacedByDropCap;
- (void)beginDrag;
- (void)beginDynamicOperation;
- (void)beginResize;
- (void)beginRotate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (struct CGPoint { double x1; double x2; })calculatePointFromSearchReference:(id)arg1;
- (bool)canAspectRatioLockBeChangedByUser;
- (bool)canFlip;
- (struct CGPoint { double x1; double x2; })capturedInfoPositionForAttachment;
- (struct CGPoint { double x1; double x2; })centerForConnecting;
- (struct CGPoint { double x1; double x2; })centerForRotation;
- (id)childSearchTargets;
- (id)computeInfoGeometryDuringResize;
- (id)computeInfoGeometryFromLayoutGeometry:(id)arg1;
- (id)computeLayoutGeometry;
- (id)connectedLayouts;
- (void)dealloc;
- (id)dependentLayouts;
- (bool)dependentsRelyOnSize;
- (void)dragBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)dragByUnscaled:(struct CGPoint { double x1; double x2; })arg1;
- (id)dynamicGeometry;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)endDrag;
- (void)endDynamicOperation;
- (void)endRotate;
- (void)finishIterativePositioning;
- (bool)hasFinishedIterativePositioning;
- (void)i_accumulateLayoutsIntoSet:(id)arg1;
- (id)i_externalWrapPath;
- (id)i_layoutGeometryProvider;
- (void)i_setBaseCapturedAlignmentFrameOriginForInline;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_takeDirtyRect;
- (bool)i_useBaseCapturedAlignmentFrameOriginForInline;
- (id)i_wrapPath;
- (id)info;
- (struct CGPoint { double x1; double x2; })infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (id)initWithInfo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialBoundsForStandardKnobs;
- (id)initialInfoGeometry;
- (double)inlineCenteredAlignmentOffset;
- (double)inlineVerticalOffset;
- (id)inspectorGeometry;
- (bool)invalidGeometry;
- (void)invalidate;
- (void)invalidateChildren;
- (void)invalidateExteriorWrap;
- (void)invalidateFrame;
- (void)invalidatePosition;
- (void)invalidateSize;
- (bool)isBeingManipulated;
- (bool)isBeingTransformed;
- (bool)isInGroup;
- (bool)isInTopLevelContainerForEditing;
- (bool)isStrokeBeingManipulated;
- (id)iterativePositioningState;
- (id)layoutController;
- (id)layoutGeometryFromInfo;
- (id)layoutGeometryFromProvider;
- (void)layoutSearchForAnnotationWithHitBlock:(id /* block */)arg1;
- (int)layoutState;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layoutTransformInInfoSpace:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGSize { double x1; double x2; })maximumFrameSizeForChild:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumSizeForChildLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })minimumSize;
- (bool)orderedBefore:(id)arg1;
- (id)originalGeometry;
- (id)originalPureGeometry;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })originalPureTransformInRoot;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })originalTransformForProvidingGuides;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })originalTransformInRoot;
- (void)p_invalidateConnectedLayouts;
- (void)p_recursiveInvalidate;
- (void)p_registerWithLayoutController:(id)arg1;
- (void)p_unregisterWithLayoutController:(id)arg1;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (void)pauseDynamicTransformation;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (id)pureGeometry;
- (id)pureGeometryInRoot;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })pureTransformInRoot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (id)reliedOnLayouts;
- (void)removeConnectedLayout:(id)arg1;
- (Class)repClassOverride;
- (bool)resizeMayChangeAspectRatio;
- (void)resizeWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 asChild:(bool)arg2;
- (id)rootLayout;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize { double x1; double x2; })arg1 withGeometry:(id)arg2;
- (id)searchTarget;
- (void)setAdjustedInterimPositionX:(double)arg1;
- (void)setAdjustedInterimPositionY:(double)arg1;
- (void)setDynamicGeometry:(id)arg1;
- (void)setIterativePositioningState:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setParent:(id)arg1;
- (bool)shouldBeDisplayedInShowMode;
- (bool)shouldDisplayGuides;
- (bool)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (bool)shouldProvideSizingGuides;
- (bool)shouldValidate;
- (id)stroke;
- (void)takeRotationFromTracker:(id)arg1;
- (void)unregisterFromLayoutController;
- (void)updateChildrenFromInfo;
- (void)validate;
- (void)validateFromLastInterimPosition;
- (bool)wantsRoundedInlinePosition;
- (void)wasAddedToLayoutController:(id)arg1;
- (void)wasRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willLayoutInlineWithTextAttributes:(struct __CFDictionary { }*)arg1 columnWidth:(double)arg2;

@end
