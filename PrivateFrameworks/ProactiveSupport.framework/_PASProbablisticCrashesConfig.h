
@interface _PASProbablisticCrashesConfig : NSObject {
    unsigned int  _oddsDenominator;
    unsigned int  _oddsNumerator;
    unsigned char  _uniqueCallsiteWindowSize;
}

@property (nonatomic) unsigned int oddsDenominator;
@property (nonatomic) unsigned int oddsNumerator;
@property (nonatomic) unsigned char uniqueCallsiteWindowSize;

- (id)init;
- (unsigned int)oddsDenominator;
- (unsigned int)oddsNumerator;
- (void)setOddsDenominator:(unsigned int)arg1;
- (void)setOddsNumerator:(unsigned int)arg1;
- (void)setUniqueCallsiteWindowSize:(unsigned char)arg1;
- (unsigned char)uniqueCallsiteWindowSize;

@end
