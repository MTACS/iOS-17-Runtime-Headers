
@interface ABPKPaddingParams : NSObject {
    unsigned int  _height;
    unsigned int  _offsetHeight;
    unsigned int  _offsetWidth;
    float  _scale;
    unsigned int  _width;
}

@property unsigned int height;
@property unsigned int offsetHeight;
@property unsigned int offsetWidth;
@property float scale;
@property unsigned int width;

- (unsigned int)height;
- (id)initWithInputResolution:(struct CGSize { double x1; double x2; })arg1 andOutputResolution:(struct CGSize { double x1; double x2; })arg2;
- (unsigned int)offsetHeight;
- (unsigned int)offsetWidth;
- (float)scale;
- (void)setHeight:(unsigned int)arg1;
- (void)setOffsetHeight:(unsigned int)arg1;
- (void)setOffsetWidth:(unsigned int)arg1;
- (void)setScale:(float)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;

@end
