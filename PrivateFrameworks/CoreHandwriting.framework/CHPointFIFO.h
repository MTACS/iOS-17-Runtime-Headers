
@interface CHPointFIFO : NSObject {
    CHPointFIFO * _nextFIFO;
}

- (void).cxx_destruct;
- (void)addPoint;
- (void)clear;
- (void)emitPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1;

@end
