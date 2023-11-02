
@protocol _INPBReportIncidentIntentResponse <NSObject>

@required

+ (Class)supportedTypeType;

- (int)StringAsTransportTypes:(NSString *)arg1;
- (void)addSupportedType:(_INPBSupportedTrafficIncidentType *)arg1;
- (void)addTransportType:(int)arg1;
- (void)clearSupportedTypes;
- (void)clearTransportTypes;
- (bool)hasLocation;
- (_INPBLocation *)location;
- (void)setLocation:(_INPBLocation *)arg1;
- (void)setSupportedTypes:(NSArray *)arg1;
- (void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (_INPBSupportedTrafficIncidentType *)supportedTypeAtIndex:(unsigned long long)arg1;
- (NSArray *)supportedTypes;
- (unsigned long long)supportedTypesCount;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (int*)transportTypes;
- (NSString *)transportTypesAsString:(int)arg1;
- (unsigned long long)transportTypesCount;

@end
