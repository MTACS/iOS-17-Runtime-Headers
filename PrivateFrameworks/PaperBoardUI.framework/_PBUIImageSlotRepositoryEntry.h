
@interface _PBUIImageSlotRepositoryEntry : NSObject {
    long long  _actualStyle;
    struct CGImageBlockSet { } * _blockSet;
    UIImage * _image;
    IOSurface * _ioSurface;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSURL * _url;
}

@property (nonatomic) long long actualStyle;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) IOSurface *ioSurface;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (void)_setBlockSet:(struct CGImageBlockSet { }*)arg1;
- (long long)actualStyle;
- (void)dealloc;
- (id)image;
- (id)ioSurface;
- (void)setActualStyle:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUrl:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)url;

@end
