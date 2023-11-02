
@interface SymbolCandidate : NSObject {
    double  _logProbability;
    double  _probability;
    unsigned short  _symbol;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) double logProbability;
@property (nonatomic) double probability;
@property (nonatomic) unsigned short symbol;

- (id)description;
- (double)logProbability;
- (double)probability;
- (void)setLogProbability:(double)arg1;
- (void)setProbability:(double)arg1;
- (void)setSymbol:(unsigned short)arg1;
- (unsigned short)symbol;

@end
