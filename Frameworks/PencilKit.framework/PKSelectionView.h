
@interface PKSelectionView : PKAdornmentView <UIContextMenuInteractionDelegate, UIDragInteractionDelegate_Private, UIGestureRecognizerDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentScrollOffset;
    bool  _displayingContextMenu;
    UITapGestureRecognizer * _doubleTapGR;
    UILongPressGestureRecognizer * _dragGR;
    UIDragInteraction * _dragInteraction;
    UITapGestureRecognizer * _editMenuGR;
    id /* block */  _finishDragToAttachmentBlock;
    bool  _hasTranscription;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDragPosition;
    double  _initialRotation;
    bool  _isDragging;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offsetInTouchView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalStrokeFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalTranslation;
    UIDragPreview * _previewProvider;
    double  _rotation;
    double  _scale;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _selectionDrawingTransform;
    long long  _selectionType;
    double  _startRotation;
    double  _startScale;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _userTransform;
    bool  _wantsDragPlatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UITapGestureRecognizer *doubleTapGR;
@property (nonatomic, readonly) UILongPressGestureRecognizer *dragGR;
@property (nonatomic, readonly) UIDragInteraction *dragInteraction;
@property (nonatomic, readonly) UITapGestureRecognizer *editMenuGR;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDragging;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offsetInTouchView;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } selectionDrawingTransform;
@property (nonatomic) long long selectionType;
@property (readonly) Class superclass;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } userTransform;
@property (nonatomic) bool wantsDragPlatter;

- (void).cxx_destruct;
- (id)_accessibilityUserTestingChildren;
- (void)_cleanupDragState;
- (void)_clearSelection:(id)arg1;
- (void)_commitDragToAttachment;
- (id)_currentAttachment;
- (void)_didAddNewAttachment;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_dragWillBegin;
- (bool)_exactlyOneExternalElementSelected;
- (void)_findTranscriptionWithCompletion:(id /* block */)arg1;
- (void)_resetDragState;
- (id)_selectionViewGestures;
- (void)_setupWindowNotificationsForScene:(id)arg1;
- (void)_updateTransform;
- (void)animateViewToOriginalPosition;
- (bool)canBecomeFirstResponder;
- (bool)canConvertToShapeWithAction:(SEL)arg1 withSender:(id)arg2 handled:(bool*)arg3;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 forInputType:(long long)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)convertToShapes:(id)arg1;
- (void)copy:(id)arg1;
- (void)copyTranscription:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)didBeginDraggingSelection;
- (void)didDoubleTap;
- (void)didEndGestureWithTranslation:(struct CGPoint { double x1; double x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)doubleTapGR;
- (id)dragGR;
- (id)dragInteraction;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragSelection:(id)arg1;
- (void)duplicate:(id)arg1;
- (id)editMenuGR;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuTargetRect;
- (long long)editingInteractionConfiguration;
- (void)generateStrokeImageForPasteAndDND;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 strokeSelection:(id)arg2 selectionController:(id)arg3 selectionType:(long long)arg4;
- (void)insertSpace:(id)arg1;
- (bool)isDragging;
- (id)keyCommands;
- (bool)lassoContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)makeViewAliveAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })offsetInTouchView;
- (void)paste:(id)arg1;
- (void)rotateSelection:(id)arg1;
- (void)scaleSelection:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })selectionDrawingTransform;
- (long long)selectionType;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectionDrawingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setSelectionType:(long long)arg1;
- (void)setUserTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWantsDragPlatter:(bool)arg1;
- (id)shapeMenuActions;
- (id)shapeSupportCache;
- (void)straighten:(id)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)toggleEditMenu;
- (void)translate:(id)arg1;
- (void)updateLocationForDrop:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })userTransform;
- (bool)wantsDragPlatter;
- (void)willMoveToWindow:(id)arg1;

@end
