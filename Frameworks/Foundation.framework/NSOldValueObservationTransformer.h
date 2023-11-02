
@interface NSOldValueObservationTransformer : NSObservationTransformer {
    id  _lastValue;
}

+ (id)oldValuesTransformer;

- (void)_receiveBox:(id)arg1;
- (void)dealloc;

@end
