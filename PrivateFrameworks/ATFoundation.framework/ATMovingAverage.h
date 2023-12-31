
@interface ATMovingAverage : NSObject {
    unsigned long long  _count;
    unsigned long long  _index;
    double * _values;
    unsigned long long  _window;
}

@property (nonatomic, readonly) double average;
@property (nonatomic, readonly) unsigned long long window;

- (double)average;
- (void)dealloc;
- (id)initWithWindow:(unsigned long long)arg1;
- (void)reset;
- (void)update:(double)arg1;
- (unsigned long long)window;

@end
