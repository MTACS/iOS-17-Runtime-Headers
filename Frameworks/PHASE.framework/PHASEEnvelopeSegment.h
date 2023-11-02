
@interface PHASEEnvelopeSegment : NSObject {
    long long  _curveType;
    void _endPoint;
}

@property (nonatomic) long long curveType;
@property (nonatomic) void endPoint;

- (long long)curveType;
- (void)endPoint;
- (id)init;
- (id)initWithEndPoint:(void *)arg1 curveType:(void *)arg2; // needs 2 arg types, found 1: long long
- (void)setCurveType:(long long)arg1;
- (void)setEndPoint;

@end
