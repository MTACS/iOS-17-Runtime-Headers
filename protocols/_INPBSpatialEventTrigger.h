
@protocol _INPBSpatialEventTrigger <NSObject>

@required

+ (Class)suggestedValuesType;

- (int)StringAsEvent:(NSString *)arg1;
- (int)StringAsMobileSpace:(NSString *)arg1;
- (void)addSuggestedValues:(_INPBLocationValue *)arg1;
- (void)clearSuggestedValues;
- (int)event;
- (NSString *)eventAsString:(int)arg1;
- (bool)hasEvent;
- (bool)hasLocation;
- (bool)hasMobileSpace;
- (_INPBLocationValue *)location;
- (int)mobileSpace;
- (NSString *)mobileSpaceAsString:(int)arg1;
- (void)setEvent:(int)arg1;
- (void)setHasEvent:(bool)arg1;
- (void)setHasMobileSpace:(bool)arg1;
- (void)setLocation:(_INPBLocationValue *)arg1;
- (void)setMobileSpace:(int)arg1;
- (void)setSuggestedValues:(NSArray *)arg1;
- (NSArray *)suggestedValues;
- (_INPBLocationValue *)suggestedValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestedValuesCount;

@end
