
@interface CATintedImage : NSObject <NSSecureCoding> {
    unsigned int  _copy_flags;
    struct CGImage { } * _image;
    struct CGColor { } * _tint;
}

@property (retain) struct CGImage { }*image;
@property (retain) struct CGColor { }*tint;

+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)tintedImageWithCABackingStore:(struct CABackingStore { }*)arg1;
+ (id)tintedImageWithCGImage:(struct CGImage { }*)arg1 tint:(struct CGColor { }*)arg2;
+ (id)tintedImageWithCGImage:(struct CGImage { }*)arg1 tint:(struct CGColor { }*)arg2 copyFlags:(unsigned int)arg3;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void*)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (void)dealloc;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGImage { }*)image;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setTint:(struct CGColor { }*)arg1;
- (struct CGColor { }*)tint;

@end
