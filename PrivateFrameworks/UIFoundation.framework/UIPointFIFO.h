
@interface UIPointFIFO : NSObject {
    UIPointFIFO * _nextFIFO;
}

@property (nonatomic, retain) UIPointFIFO *nextFIFO;

- (void)addPoint;
- (void)clear;
- (void)dealloc;
- (void)emitPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)nextFIFO;
- (void)setNextFIFO:(id)arg1;

@end
