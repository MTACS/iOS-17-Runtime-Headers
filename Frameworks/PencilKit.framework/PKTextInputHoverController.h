
@interface PKTextInputHoverController : NSObject <PKHoverControllerDelegate> {
    UIView * __currentHoverFlashElementView;
    PKTextInputElement * __hidePlaceholderElement;
    PKHoverController * __hoverController;
    CAShapeLayer * __hoverDebugLayer;
    PKTextInputElement * __hoverElementToFocus;
    NSArray * __hoverFlashElements;
    UIView * __hoverFlashElementsView;
    bool  __iBeamWaitingForElement;
    PKTextInputElement * __ibeamElement;
    PKTextInputElementContent * __ibeamElementContent;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __ibeamFrame;
    double  __ibeamLastTimestamp;
    CALayer * __ibeamLayer;
    PKTextInputElement * __lineBreakElement;
    bool  __lineBreakIsAtValidLocation;
    double  __lineBreakIsAtValidLocationTimestamp;
    long long  __lineBreakNumLines;
    struct CGPoint { 
        double x; 
        double y; 
    }  __lineBreakPosition;
    double  __lineBreakTimestamp;
    bool  __lineBreakWaitingForElement;
    bool  __shouldHoverFlashElements;
    bool  __shouldMakeCursorStrong;
    <PKTextInputHoverControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)hoverController:(id)arg1 didBegin:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)hoverController:(id)arg1 didUpdate:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)hoverController:(id)arg1 holdGestureMeanInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2 latestInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg3;
- (void)hoverControllerDidEnd:(id)arg1;
- (void)hoverControllerDidLift:(id)arg1;
- (void)hoverControllerHoldGestureEnded:(id)arg1;
- (void)unhidePlaceholderElementIfNecessary;

@end
