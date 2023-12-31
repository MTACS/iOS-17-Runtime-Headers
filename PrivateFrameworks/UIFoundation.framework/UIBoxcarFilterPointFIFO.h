
@interface UIBoxcarFilterPointFIFO : UIPointFIFO {
    _UIPointVector * _prevPoints;
    float  _spacing;
    unsigned long long  _width;
}

@property (nonatomic, retain) _UIPointVector *prevPoints;
@property (nonatomic) float spacing;
@property (nonatomic) unsigned long long width;

- (void)addPoint;
- (void)clear;
- (void)dealloc;
- (void)emitAveragedPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3;
- (id)prevPoints;
- (void)setPrevPoints:(id)arg1;
- (void)setSpacing:(float)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (float)spacing;
- (unsigned long long)width;

@end
