
@interface BoundingBoxWithLabel : NSObject {
    unsigned short  _alias;
    float  _depth;
    unsigned short  _label;
    unsigned long long  _maxX;
    unsigned long long  _maxY;
    unsigned long long  _minX;
    unsigned long long  _minY;
}

@property unsigned short alias;
@property float depth;
@property (readonly) unsigned short label;
@property unsigned long long maxX;
@property unsigned long long maxY;
@property unsigned long long minX;
@property unsigned long long minY;

- (unsigned short)alias;
- (unsigned long long)computeArea;
- (float)depth;
- (id)initWithLabel:(unsigned short)arg1;
- (unsigned short)label;
- (unsigned long long)maxX;
- (unsigned long long)maxY;
- (unsigned long long)minX;
- (unsigned long long)minY;
- (void)setAlias:(unsigned short)arg1;
- (void)setDepth:(float)arg1;
- (void)setMaxX:(unsigned long long)arg1;
- (void)setMaxY:(unsigned long long)arg1;
- (void)setMinX:(unsigned long long)arg1;
- (void)setMinY:(unsigned long long)arg1;

@end
