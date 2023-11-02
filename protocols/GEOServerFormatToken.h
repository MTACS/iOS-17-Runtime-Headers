
@protocol GEOServerFormatToken <NSObject, NSCoding>

@required

- (NSString *)accessibilityLabel;
- (<GEOTransitArtworkDataSource> *)artworkValue;
- (<GEOServerFormatTokenCountdownValue> *)countdownValue;
- (GEOGenericCombinations *)genericCombinations;
- (<GEOServerFormatTokenManeuverValue> *)maneuverValue;
- (<GEOServerFormatTokenNumberData> *)numberData;
- (float)percentageValue;
- (<GEOServerFormatTokenPriceValue> *)priceValue;
- (bool)shouldScaleUnits;
- (NSString *)stringValue;
- (NSArray *)timeStampValues;
- (NSString *)token;
- (long long)type;
- (<GEOServerFormatTokenUrlValue> *)urlValue;
- (unsigned int)value1;
- (unsigned int)value2;
- (NSArray *)value3s;
- (int)waypointIndex;

@end
