
@interface PDBucket : NSObject {
    unsigned long long  _count;
    bool  _hasInclusiveUpperBound;
    NSString * _label;
    double  _lowerInclusiveBound;
    double  _upperBound;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) bool hasInclusiveUpperBound;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) double lowerInclusiveBound;
@property (nonatomic) double upperBound;

- (void).cxx_destruct;
- (unsigned long long)count;
- (bool)hasInclusiveUpperBound;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)label;
- (double)lowerInclusiveBound;
- (void)setCount:(unsigned long long)arg1;
- (void)setHasInclusiveUpperBound:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLowerInclusiveBound:(double)arg1;
- (void)setUpperBound:(double)arg1;
- (double)upperBound;

@end
