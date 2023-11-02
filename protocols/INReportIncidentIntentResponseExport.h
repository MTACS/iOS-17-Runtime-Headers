
@protocol INReportIncidentIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (CLPlacemark *)location;
- (void)setLocation:(CLPlacemark *)arg1;
- (void)setSupportedTypes:(NSArray *)arg1;
- (void)setTransportTypes:(unsigned long long)arg1;
- (NSArray *)supportedTypes;
- (unsigned long long)transportTypes;

@end
