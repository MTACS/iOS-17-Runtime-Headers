
@interface TSTTableRep : TSWPTextHostRep <TSDTilingLayerDelegate, UITextFieldDelegate> {
    bool  _settingSelection;
    <TSTTableAnimationController> * mAnimationController;
    NSMutableArray * mAnimationStack;
    <TSTCanvasReferenceController> * mCanvasReferenceController;
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
    TSTSelectionDragController * mCellDragController;
    CAShapeLayer * mCellEditingMaskLayer;
    TSTTableCellTextEditingRep * mContainedTextEditingRep;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mControlCellID;
    double  mCurrentScreenScale;
    <TSTTableRepDelegate> * mDelegate;
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
    }  mDirtyCellRange;
    bool  mDragByHandleOnly;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mEditingHyperlinkCellID;
    CAShapeLayer * mFindSelectionHighlightLayer;
    CAShapeLayer * mHighlightedHyperlinkLayer;
    TSWPHyperlinkField * mHyperlinkField;
    bool  mHyperlinkModified;
    TSWPStorage * mHyperlinkParentStorage;
    bool  mInspectingHyperlinkInEditingStorage;
    bool  mIsAspectOperationInProgress;
    bool  mIsZoomOperationInProgress;
    bool  mIsZoomToEditOperationInProgress;
    TSDTilingLayer * mOverlayFrozenHeaderColumns;
    CALayer * mOverlayFrozenHeaderColumnsMask;
    TSDTilingLayer * mOverlayFrozenHeaderCorner;
    TSDTilingLayer * mOverlayFrozenHeaderRows;
    CALayer * mOverlayFrozenHeaderRowsMask;
    CALayer * mOverlayFrozenHeaderTableBodyMask;
    CALayer * mOverlayFrozenHeaderTableNameMask;
    TSDTilingLayer * mOverlayTableName;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mRatingsDragCellID;
    bool  mRecursivelyDrawingInContext;
    TSTTableReferences * mReferences;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mSearchSelectionBounds;
    bool  mSelectionUsesBezierPath;
    bool  mSelectsCellOnInitialTap;
    TSTTableSelection * mSourceFillSelection;
    <TSTTableChromeProvider> * mTableChrome;
    TSWPTextEditing * mTableNameTextEditing;
    TSTTableSelection * mTargetFillSelection;
    bool  mUsesWholeChromeResizer;
    NSSet * mVisibleFillKnobs;
    TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> * mVisitorKnobTracker;
    bool  mWPEndedTableNameEditing;
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
    }  mZoomToEditVisibleCellRange;
}

@property (nonatomic, retain) TSTSearchReference *activeSearchReference;
@property (nonatomic) <TSTTableAnimationController> *animationController;
@property (nonatomic, readonly) <TSTCanvasReferenceController> *canvasReferenceController;
@property (nonatomic, readonly) TSDCanvasView *canvasView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } canvasVisibleRect;
@property (nonatomic) TSTSelectionDragController *cellDragController;
@property (nonatomic, readonly) TSTAnimation *currentAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TSTTableRepDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSTEditingState *editingState;
@property (nonatomic, readonly) TSDEditorController *editorController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isZoomToEditOperationInProgress;
@property (nonatomic, readonly) CALayer *layerForRep;
@property (nonatomic, readonly) TSTMasterLayout *masterLayout;
@property (nonatomic) struct { unsigned short x1; unsigned char x2; unsigned char x3; } ratingsDragCellID;
@property (nonatomic, readonly) TSTCellRegion *selectionRegion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <TSTTableChromeProvider> *tableChrome;
@property (nonatomic, readonly) TSTTableInfo *tableInfo;
@property (nonatomic, readonly) TSTLayout *tableLayout;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformFromCanvas;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformToCanvas;
@property (nonatomic, readonly) TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *visitorKnobTracker;

+ (Class)tableRepDelegateClass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (id)additionalLayersUnderLayer;
- (id)animationController;
- (void)asyncPostTextChangedInRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 strokeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (void)beginDragInsertFromPalette;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForCellSelection:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForResizeGuideUI;
- (bool)canDrawInBackgroundDuringScroll;
- (bool)canDrawInParallel;
- (bool)canDrawTilingLayerInBackground:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })canvasBoundsForCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)canvasReferenceController;
- (id)canvasView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })canvasVisibleRect;
- (id)cellDragController;
- (void)contentsRectForCellRangeAcrossSpaces:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 contentsCenterInfo:(struct { bool x1; double x2; double x3; double x4; double x5; double x6; double x7; }*)arg2 canvasFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (id)currentAnimation;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })deviceBoundsForCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)dirtyCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)editingState;
- (id)editorController;
- (id)editorSelection;
- (void)endDragInsertFromPalette;
- (bool)handlesEditMenu;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath { }*)arg2 shouldPulsate:(bool)arg3;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)invalidateAnnotationColor;
- (void)invalidateCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)invalidateCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 fittingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 invalidateSize:(bool)arg3;
- (void)invalidateComments;
- (void)invalidateEditingCell;
- (void)invalidateFrozenHeaders;
- (void)invalidateSelection;
- (void)invalidateTableName;
- (bool)isDraggable;
- (bool)isFullyVisibleWithBorder:(int)arg1;
- (bool)isZoomToEditOperationInProgress;
- (id)layerForRep;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrameInScaledCanvas;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(bool)arg3;
- (id)masterLayout;
- (bool)mustDrawOnMainThreadForInteractiveCanvas;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (struct CGPath { }*)newPathForSearchReference:(id)arg1;
- (void)orientationDidChange:(id)arg1;
- (id)overlayLayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)p_editingDidEnd;
- (id)p_frozenHeaderOverlayLayers;
- (void)p_hideSelectionLayers;
- (void)p_invalidateCellCommentBadges;
- (struct CGPath { }*)p_newPathForSearchReference:(id)arg1;
- (id)p_tableNameOverlayLayers;
- (id)p_textImageForPath:(struct CGPath { }*)arg1 shouldPulsate:(bool)arg2;
- (void)popAnimation;
- (void)pushAnimation:(id)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })ratingsDragCellID;
- (void)recursivelyDrawInContext:(struct CGContext { }*)arg1;
- (id)repForDragging;
- (void)screenScaleDidChange;
- (id)selectionRegion;
- (void)setAnimationController:(id)arg1;
- (void)setCellDragController:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRatingsDragCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)shouldCommitPendingTextEdit;
- (bool)shouldRestartTextEditing;
- (id)tableChrome;
- (id)tableInfo;
- (id)tableLayout;
- (id)tableModel;
- (int)tilingMode;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromCanvas;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToCanvas;
- (void)updateChildrenFromLayout;
- (void)updateDynamicModeForEditingSpillText;
- (void)updateFromLayout;
- (void)validateFrozenHeaderColumns;
- (void)validateFrozenHeaderCorner;
- (void)validateFrozenHeaderRows;
- (void)validateFrozenHeaderTableBodyMask;
- (void)validateStrokesInEditingSpillingTextRange;
- (void)validateTableName;
- (void)validateVisibleRect;
- (void)viewScaleDidChange;
- (id)visitorKnobTracker;
- (void)willBeRemoved;

@end
