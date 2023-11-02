
@interface ABPKCropParams : NSObject {
    unsigned int  _height;
    unsigned int  _offsetHeight;
    unsigned int  _offsetWidth;
    unsigned int  _width;
}

@property unsigned int height;
@property unsigned int offsetHeight;
@property unsigned int offsetWidth;
@property unsigned int width;

- (unsigned int)height;
- (id)initWithAspectRatio:(float)arg1 andInputResolution:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithInputResolution:(struct CGSize { double x1; double x2; })arg1 andOutputResolution:(struct CGSize { double x1; double x2; })arg2;
- (unsigned int)offsetHeight;
- (unsigned int)offsetWidth;
- (void)setHeight:(unsigned int)arg1;
- (void)setOffsetHeight:(unsigned int)arg1;
- (void)setOffsetWidth:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;

@end
