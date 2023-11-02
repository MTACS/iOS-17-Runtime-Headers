
@interface __NSLMMarkedTextUnderlineRenderer : NSObject {
    struct CGContext { } * _cgContextRef;
    double  _endX;
    bool  _hasUnderlineSegment;
    double  _selectedEndX;
    double  _selectedStartX;
    double  _startX;
    UIColor * _underlineColor;
    double  _yPosition;
}

- (void)_renderUnderlineStartX:(double)arg1 endX:(double)arg2 yPosition:(double)arg3 alphaValue:(double)arg4;
- (void)dealloc;

@end
