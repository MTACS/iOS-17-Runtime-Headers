
@interface _CUIPSDStopAndMidpointPair : NSObject {
    double  midpoint;
    id  stop;
}

- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)initWithStop:(id)arg1 midpoint:(id)arg2;
- (double)midpoint;
- (id)stop;

@end
