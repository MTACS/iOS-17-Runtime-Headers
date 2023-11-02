
@interface WiFiSettlementConfiguration : NSObject {
    double  _highConfidenceSettlementTime;
    double  _lowConfidenceSettlementTime;
    unsigned long long  _maxNetworksForSettlement;
    unsigned long long  _maxScansWithoutMatchForUnsettlement;
}

@property (nonatomic) double highConfidenceSettlementTime;
@property (nonatomic) double lowConfidenceSettlementTime;
@property (nonatomic) unsigned long long maxNetworksForSettlement;
@property (nonatomic) unsigned long long maxScansWithoutMatchForUnsettlement;

- (id)description;
- (double)highConfidenceSettlementTime;
- (id)init;
- (double)lowConfidenceSettlementTime;
- (unsigned long long)maxNetworksForSettlement;
- (unsigned long long)maxScansWithoutMatchForUnsettlement;
- (void)setHighConfidenceSettlementTime:(double)arg1;
- (void)setLowConfidenceSettlementTime:(double)arg1;
- (void)setMaxNetworksForSettlement:(unsigned long long)arg1;
- (void)setMaxScansWithoutMatchForUnsettlement:(unsigned long long)arg1;

@end
