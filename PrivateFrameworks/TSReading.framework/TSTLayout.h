
@interface TSTLayout : TSWPTextHostLayout <TSKSearchTarget, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver> {
    struct { 
        double tableNameHeight; 
        struct CGSize { 
            double width; 
            double height; 
        } scaleToFitParent; 
        struct CGSize { 
            double width; 
            double height; 
        } scaleToFitEnclosingTextColumn; 
    }  mCached;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  mCachedPaddingForEditingCell;
    unsigned int  mCachedVerticalAlignmentForEditingCell;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCanvasVisibleRect;
    struct CGSize { 
        double width; 
        double height; 
    }  mCapturedStrokeFrameSizeForInline;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mComputedEditingCellContentFrame;
    TSWPLayout * mContainedTextEditingLayout;
    unsigned int  mContainedTextEditorParagraphAlignment;
    bool  mContainedTextEditorSpills;
    bool  mContainedTextEditorTextWraps;
    int  mCoordinatesChangedMaskForChrome;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mEditingSpillingTextRange;
    bool  mLayoutDirectionIsLeftToRight;
    TSTLayoutHint * mLayoutHint;
    TSTMasterLayout * mMasterLayout;
    bool  mNewCanvasRevealedHorizontally;
    bool  mNewCanvasRevealedVertically;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mPreviousVisibleStrokeFrame;
    bool  mProcessChangesFiltering;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mRenderingFrameForLayoutGeometryFromInfo;
    TSTLayoutSpaceBundle * mSpaceBundle;
    struct CGSize { 
        double width; 
        double height; 
    }  mSpillingTextSize;
    struct CGSize { 
        double width; 
        double height; 
    }  mStrokeDelta;
    bool  mTableNameVisibilityIsValid;
    bool  mTableNameVisible;
    struct CGSize { 
        double width; 
        double height; 
    }  mTableSizeWithoutStrokes;
    bool  mTabsVisible;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } adjustedInsets;
@property (nonatomic, readonly) bool alwaysStartsNewTarget;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) bool columnsAreLeftToRight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } computedEditingCellContentFrame;
@property (nonatomic, retain) TSWPLayout *containedTextEditingLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } editingSpillingTextRange;
@property (nonatomic, readonly) TSTEditingState *editingState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool layoutDirectionIsLeftToRight;
@property (nonatomic, retain) TSTLayoutHint *layoutHint;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, retain) TSTMasterLayout *masterLayout;
@property (nonatomic) bool newCanvasRevealedHorizontally;
@property (nonatomic) bool newCanvasRevealedVertically;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddingForEditingCell;
@property (nonatomic) bool processChangesFiltering;
@property (nonatomic) struct CGSize { double x1; double x2; } scaleToFit;
@property (nonatomic, readonly) bool shrinkTextToFit;
@property (nonatomic, retain) TSTLayoutSpaceBundle *spaceBundle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSTTableInfo *tableInfo;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (nonatomic, readonly) double textScaleFactor;

- (struct CGSize { double x1; double x2; })adjustedInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (bool)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (void)bezierPathsForCellRegion:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 viewScale:(double)arg3 inset:(double)arg4 block:(id /* block */)arg5;
- (struct CGPoint { double x1; double x2; })calculatePointFromSearchReference:(id)arg1;
- (bool)canAspectRatioLockBeChangedByUser;
- (bool)canRotateChildLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })capturedInfoPositionForAttachment;
- (id)childSearchTargets;
- (id)children;
- (unsigned long long)columnCount;
- (bool)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computedEditingCellContentFrame;
- (id)containedTextEditingLayout;
- (void)dealloc;
- (id)dependentLayouts;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })editingSpillingTextRange;
- (id)editingState;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (bool)inFindReplaceMode;
- (bool)inPrintPreviewMode;
- (struct CGPoint { double x1; double x2; })infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 layoutHint:(id)arg2;
- (id)initialInfoGeometry;
- (struct CGSize { double x1; double x2; })initialTextSize;
- (void)invalidate;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidateSize;
- (void)invalidateTableNameVisibility;
- (bool)isBeingManipulated;
- (bool)isZoomedEditing;
- (bool)layoutDirectionIsLeftToRight;
- (id)layoutGeometryFromInfo;
- (id)layoutHint;
- (id)layoutMargins;
- (void)layoutSearchForAnnotationWithHitBlock:(id /* block */)arg1;
- (void)layoutSearchForSpellingErrorsWithHitBlock:(id /* block */)arg1 stop:(bool*)arg2;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskRectForTextLayout:(id)arg1;
- (id)masterLayout;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })minimumSize;
- (unsigned int)naturalAlignmentForTextLayout:(id)arg1;
- (bool)newCanvasRevealedHorizontally;
- (bool)newCanvasRevealedVertically;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (void)offsetGeometryBy:(struct CGPoint { double x1; double x2; })arg1;
- (bool)orderedBefore:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_computeSpillingTextFrameForLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2 editingSpillRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg3;
- (unsigned int)p_defaultAlignmentForTableWritingDirection;
- (bool)p_getLayoutDirectionLeftToRight;
- (bool)p_layoutWhollyContainsGridRange:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (unsigned int)p_naturalAlignmentForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)p_processChange:(id)arg1 forChangeSource:(id)arg2 actions:(id)arg3;
- (void)p_processChangeActions:(id)arg1;
- (struct CGSize { double x1; double x2; })p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (void)p_updateCachedStyleInformationFromCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingForEditingCell;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4;
- (void)processChanges:(id)arg1;
- (bool)processChangesFiltering;
- (int)reapCoordinatesChangedMaskForChrome;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (void)removeContainedTextEditingLayout;
- (Class)repClassForTextLayout:(id)arg1;
- (bool)resizeMayChangeAspectRatio;
- (struct CGSize { double x1; double x2; })scaleToFit;
- (void)setContainedTextEditingLayout:(id)arg1;
- (void)setLayoutHint:(id)arg1;
- (void)setMasterLayout:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNewCanvasRevealedHorizontally:(bool)arg1;
- (void)setNewCanvasRevealedVertically:(bool)arg1;
- (void)setProcessChangesFiltering:(bool)arg1;
- (void)setScaleToFit:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpaceBundle:(id)arg1;
- (void)setupContainedTextEditingLayout:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)shrinkTextToFit;
- (id)spaceBundle;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (bool)supportsRotation;
- (id)tableInfo;
- (id)tableModel;
- (bool)textIsVertical;
- (void)updateChildrenFromInfo;
- (void)validate;
- (void)validateTableNameVisibility;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (int)wrapFitType;

@end
