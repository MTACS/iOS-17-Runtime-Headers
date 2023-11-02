
@interface SXTextTangierFlowRep : TSWPRep <SXAXCustomRotorItemProvider, SXTextTangierRepAccessibilityElement> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameInCanvas;
    SXAXCustomRotor * _headingsRotor;
    SXTextTangierInteractiveCanvasController * _icc;
    SXAXCustomRotor * _linkRotor;
    <SXTextTangierRepAccessibilityDataSource> * accessibilityDataSource;
}

@property (nonatomic) <SXTextTangierRepAccessibilityDataSource> *accessibilityDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInCanvas;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXAXCustomRotor *headingsRotor;
@property (nonatomic) SXTextTangierInteractiveCanvasController *icc;
@property (nonatomic, retain) SXAXCustomRotor *linkRotor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityDataSource;
- (id)accessibilityElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameForScrolling;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityNextTextNavigationElement;
- (id)accessibilityPreviousTextNavigationElement;
- (bool)accessibilitySupportsTextSelection;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint { double x1; double x2; })arg1 isTail:(bool)arg2 selectionType:(int)arg3;
- (void)dealloc;
- (bool)forceTiling;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInCanvas;
- (id)headingsRotor;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1 withGesture:(id)arg2 passingTest:(id /* block */)arg3;
- (id)icc;
- (id)interactiveCanvasController;
- (bool)isAccessibilityElement;
- (id)itemsForCustomRotor:(id)arg1;
- (id)linkRotor;
- (id)orderedSiblings;
- (bool)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(bool)arg3;
- (bool)preventClipToColumn;
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(bool)arg2;
- (void)setAccessibilityDataSource:(id)arg1;
- (void)setFrameInCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHeadingsRotor:(id)arg1;
- (void)setIcc:(id)arg1;
- (void)setLinkRotor:(id)arg1;
- (id)siblings;
- (id)storage;
- (id)supportedCustomRotors;
- (id)sxaxLinkElements;
- (id)sxaxNameForEditRotorAction:(id)arg1;
- (id)sxaxSupportedEditRotorActions;
- (bool)updateFromVisualPosition;
- (Class)wpEditorClass;

@end
