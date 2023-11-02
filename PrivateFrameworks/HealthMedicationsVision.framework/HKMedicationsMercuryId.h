
@interface HKMedicationsMercuryId : NSObject {
    long long  _hgId;
    float  _jaccardSimilarity;
    bool  _tradeNameMatched;
}

@property (nonatomic) long long hgId;
@property (nonatomic) float jaccardSimilarity;
@property (nonatomic) bool tradeNameMatched;

- (long long)hgId;
- (float)jaccardSimilarity;
- (void)setHgId:(long long)arg1;
- (void)setJaccardSimilarity:(float)arg1;
- (void)setTradeNameMatched:(bool)arg1;
- (bool)tradeNameMatched;

@end
