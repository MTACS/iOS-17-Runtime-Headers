
@interface HMIPairwiseMatch : NSObject {
    unsigned long long  _firstIndex;
    float  _score;
    unsigned long long  _secondIndex;
}

@property (readonly) unsigned long long firstIndex;
@property (readonly) float score;
@property (readonly) unsigned long long secondIndex;

- (unsigned long long)firstIndex;
- (id)initWithFirstIndex:(unsigned long long)arg1 secondIndex:(unsigned long long)arg2 score:(float)arg3;
- (float)score;
- (unsigned long long)secondIndex;

@end
