
@interface GEOClientRankingFeatureUnitExponentPair : NSObject {
    unsigned int  _exponent;
    GEOClientRankingFeatureUnit * _unit;
}

@property (nonatomic, readonly) unsigned int exponent;
@property (nonatomic, readonly) GEOClientRankingFeatureUnit *unit;

- (void).cxx_destruct;
- (unsigned int)exponent;
- (id)initWithUnit:(id)arg1 exponent:(unsigned int)arg2;
- (id)unit;

@end
