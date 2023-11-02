
@interface _PIParallaxClockLayoutResult : _NURenderResult <PIParallaxClockLayoutResult> {
    unsigned long long  _clockIntersection;
    NSString * _clockLayerOrder;
}

@property (nonatomic) unsigned long long clockIntersection;
@property (nonatomic, retain) NSString *clockLayerOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)clockIntersection;
- (id)clockLayerOrder;
- (id)description;
- (void)setClockIntersection:(unsigned long long)arg1;
- (void)setClockLayerOrder:(id)arg1;

@end
