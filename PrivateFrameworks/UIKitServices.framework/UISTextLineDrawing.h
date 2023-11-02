
@interface UISTextLineDrawing : NSObject <UISDrawing> {
    double  _baseline;
    bool  _hasLineBreak;
    struct __CTLine { } * _line;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _offset;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawingSize;
@property (nonatomic, readonly) bool hasLineBreak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })drawingSize;
- (bool)hasLineBreak;
- (id)initWithAttributedString:(struct __CFAttributedString { }*)arg1 lineBreakMode:(unsigned char)arg2 textAlignment:(unsigned char)arg3 width:(double)arg4 scale:(double)arg5;
- (id)initWithNonretainedLine:(struct __CTLine { }*)arg1 lineBreakMode:(unsigned char)arg2 textAlignment:(unsigned char)arg3 width:(double)arg4 scale:(double)arg5;
- (id)initWithString:(struct __CFString { }*)arg1 attributes:(struct __CFDictionary { }*)arg2 lineBreakMode:(unsigned char)arg3 textAlignment:(unsigned char)arg4 width:(double)arg5 scale:(double)arg6;

@end
