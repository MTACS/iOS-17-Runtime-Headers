
@interface APHUDLayer : CALayer {
    struct __CFArray { } * _Colors;
    struct __CTFont { } * _Font;
    struct __CFArray { } * _Labels;
    struct __CFDictionary { } * _TextAttributes;
    struct __CFArray { } * _Values;
}

- (void)addLine:(struct __CFString { }*)arg1 withColorIndex:(int)arg2;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)setValue:(struct __CFString { }*)arg1 atIndex:(int)arg2;
- (void)setValueAtIndex:(int)arg1 format:(id)arg2;

@end
