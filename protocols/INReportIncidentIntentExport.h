
@protocol INReportIncidentIntentExport <NSObject, JSExport>

@required

- (NSString *)additionalDetails;
- (INSupportedTrafficIncidentType *)incidentType;
- (id)init;
- (NSNumber *)isClear;
- (void)setAdditionalDetails:(NSString *)arg1;
- (void)setIncidentType:(INSupportedTrafficIncidentType *)arg1;
- (void)setIsClear:(NSNumber *)arg1;
- (void)setStartTime:(NSNumber *)arg1;
- (void)setUserLocation:(CLPlacemark *)arg1;
- (NSNumber *)startTime;
- (CLPlacemark *)userLocation;

@end
