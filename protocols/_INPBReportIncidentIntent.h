
@protocol _INPBReportIncidentIntent <NSObject>

@required

- (_INPBString *)additionalDetails;
- (bool)hasAdditionalDetails;
- (bool)hasIncidentType;
- (bool)hasIntentMetadata;
- (bool)hasIsClear;
- (bool)hasStartTime;
- (bool)hasUserLocation;
- (_INPBSupportedTrafficIncidentType *)incidentType;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)isClear;
- (void)setAdditionalDetails:(_INPBString *)arg1;
- (void)setHasIsClear:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setIncidentType:(_INPBSupportedTrafficIncidentType *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setIsClear:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setUserLocation:(_INPBLocation *)arg1;
- (double)startTime;
- (_INPBLocation *)userLocation;

@end
