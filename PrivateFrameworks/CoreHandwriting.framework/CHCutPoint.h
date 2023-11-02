
@interface CHCutPoint : NSObject {
    bool  _isEndOfStroke;
    long long  _pointIndex;
    long long  _strokeIndex;
}

@property (nonatomic, readonly) bool isEndOfStroke;
@property (nonatomic, readonly) long long pointIndex;
@property (nonatomic, readonly) long long strokeIndex;

+ (id)sortedCHCutPointArray:(id)arg1;

- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (id)initWithStrokeIndex:(long long)arg1 pointIndex:(long long)arg2 isEndOfStroke:(bool)arg3;
- (bool)isEndOfStroke;
- (bool)isEqual:(id)arg1;
- (bool)isStartOfStroke;
- (long long)pointIndex;
- (long long)strokeIndex;

@end
