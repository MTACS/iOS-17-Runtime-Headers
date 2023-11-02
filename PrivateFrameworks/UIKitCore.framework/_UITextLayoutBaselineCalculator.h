
@interface _UITextLayoutBaselineCalculator : NSObject <_UITextLayoutBaselineCalculator> {
    <UICoordinateSpace> * _coordinateSpace;
    struct CGPoint { 
        double x; 
        double y; 
    }  _fallbackTextContainerOrigin;
    double  _scale;
    _UITextLayoutControllerBase<_UITextLayoutController> * _textLayoutController;
    NSDictionary * _typingAttributes;
    bool  _usesLineFragmentOrigin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double firstBaselineOffsetFromTop;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double lastBaselineOffsetFromBottom;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_baselineOffsetAtPosition:(id)arg1;
- (double)_convertOffset:(double)arg1;
- (double)firstBaselineOffsetFromTop;
- (id)initWithTextLayoutController:(id)arg1 typingAttributes:(id)arg2 usesLineFragmentOrigin:(bool)arg3 coordinateSpace:(id)arg4 scale:(double)arg5 fallbackTextContainerOrigin:(struct CGPoint { double x1; double x2; })arg6;
- (double)lastBaselineOffsetFromBottom;

@end
