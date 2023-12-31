
@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO {
    NSMutableArray * _prevPoints;
    unsigned long long  _width;
}

@property (nonatomic, retain) NSMutableArray *prevPoints;
@property (nonatomic) unsigned long long width;

- (void).cxx_destruct;
- (void)addPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
- (void)clear;
- (void)emitAveragedPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;
- (id)prevPoints;
- (void)setPrevPoints:(id)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
