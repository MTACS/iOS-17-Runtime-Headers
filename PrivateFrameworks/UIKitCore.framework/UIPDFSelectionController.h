
@interface UIPDFSelectionController : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _adjustedPoint;
    bool  _cancelled;
    long long  _firstIndex;
    bool  _hiding;
    bool  _instantHighlightMode;
    bool  _instantModeIsSuspended;
    bool  _isTracking;
    long long  _lastIndex;
    bool  _needsLayout;
    UIPDFPageView * _pageView;
    bool  _preceeds;
    bool  _rangeMode;
    bool  _resizingWidget;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _selectionBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _selectionFixedPoint;
    <UIPDFSelectionWidget><NSObject> * _selectionWidget;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } adjustedPoint;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentSelectionPoint;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } initialSelectionPoint;
@property (nonatomic) bool instantHighlightMode;
@property (nonatomic, readonly) bool isTracking;
@property (nonatomic) UIPDFPageView *pageView;
@property (nonatomic, readonly) bool rangeMode;
@property (nonatomic, readonly) <UIPDFSelectionWidget> *selectionWidget;

- (void)addSelectionWidget:(id)arg1;
- (void)adjustSelection:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })adjustedPoint;
- (void)clearSelection;
- (struct CGPoint { double x1; double x2; })currentSelectionPoint;
- (void)dealloc;
- (id)description;
- (void)endTracking:(struct CGPoint { double x1; double x2; })arg1;
- (void)extendSelectionToParagraph;
- (void)hideWidget;
- (id)init;
- (struct CGPoint { double x1; double x2; })initialSelectionPoint;
- (bool)instantHighlightMode;
- (bool)isTracking;
- (void)layoutSelections;
- (id)pageView;
- (bool)rangeMode;
- (struct CGPoint { double x1; double x2; })selectedPointOffset;
- (void)selectionHide:(id)arg1;
- (void)selectionHideFromAncestor:(id)arg1;
- (void)selectionShow:(id)arg1;
- (void)selectionShowDelayed:(id)arg1;
- (void)selectionShowToAncestor:(id)arg1;
- (id)selectionWidget;
- (void)setInstantHighlightMode:(bool)arg1;
- (void)setPageView:(id)arg1;
- (void)setSelectionFor:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldTrackAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)startSelectingAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)startTracking:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)startTracking:(struct CGPoint { double x1; double x2; })arg1 showMagnifier:(bool*)arg2;
- (void)suspendInstantHighlightMode;
- (void)tracking:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)tracking:(struct CGPoint { double x1; double x2; })arg1 showMagnifier:(bool*)arg2;
- (bool)useParagraphMode;

@end