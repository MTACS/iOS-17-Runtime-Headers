
@interface UISTextParagraphDrawing : NSObject <UISDrawing> {
    double  _drawingHeight;
    struct __CTFrame { } * _frame;
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    unsigned char  _lineCount;
    double  _scale;
    struct __CFAttributedString { } * _textString;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawingSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned char lineCount;
@property (readonly) Class superclass;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })drawingSize;
- (id)initWithString:(id)arg1 attributes:(struct __CFDictionary { }*)arg2 size:(struct CGSize { double x1; double x2; })arg3 numberOfLines:(unsigned char)arg4 scale:(double)arg5;
- (unsigned char)lineCount;

@end
