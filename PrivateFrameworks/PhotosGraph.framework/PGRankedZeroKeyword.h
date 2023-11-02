
@interface PGRankedZeroKeyword : NSObject {
    double  _score;
    NSDictionary * _zeroKeyword;
}

@property (readonly) double score;
@property (readonly) NSDictionary *zeroKeyword;

- (void).cxx_destruct;
- (id)initWithKeyword:(id)arg1 score:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)score;
- (id)zeroKeyword;

@end
