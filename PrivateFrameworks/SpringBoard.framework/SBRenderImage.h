
@interface SBRenderImage : NSObject {
    struct _CARenderImage { } * _image;
}

- (void*)CA_copyRenderValue;
- (void)dealloc;
- (id)initWithRenderImage:(struct _CARenderImage { }*)arg1;

@end
