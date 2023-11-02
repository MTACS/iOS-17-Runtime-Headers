
@interface GEOComposedRouteCellularCoverage : NSObject <NSSecureCoding> {
    int * _coverage;
    unsigned long long  _coverageCount;
    NSData * _coverageData;
    unsigned int * _offsets;
    NSData * _offsetsData;
    double  _routeLength;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)cellularCoverageAtOffset:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateCoverageRangesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOffsets:(id)arg1 coverage:(id)arg2 routeLength:(double)arg3;

@end
