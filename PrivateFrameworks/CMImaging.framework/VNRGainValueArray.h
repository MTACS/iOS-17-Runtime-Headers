
@interface VNRGainValueArray : NSObject {
    struct { float x1; float x2; } * _gainValuePairs;
    unsigned long long  _nGainValuePairs;
}

- (void)dealloc;
- (id)initWithArray:(id)arg1;
- (float)interpolateValueForGain:(float)arg1;

@end
