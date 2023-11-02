
@interface PXCGImage : NSObject {
    struct CGImage { } * _image;
}

@property (nonatomic, readonly) struct CGImage { }*image;

- (void)dealloc;
- (unsigned long long)hash;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (bool)isEqual:(id)arg1;

@end
