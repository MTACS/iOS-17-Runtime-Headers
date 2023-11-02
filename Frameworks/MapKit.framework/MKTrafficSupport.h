
@interface MKTrafficSupport : NSObject

+ (id)sharedTrafficSupport;

- (long long)_convertType:(int)arg1;
- (id)localizedRAPDescriptionForGEOIncidentType:(int)arg1;
- (id)localizedReportConfirmationForIncidentType:(int)arg1;
- (id)localizedReportedByYouForGEOIncidentType:(int)arg1;
- (id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2;
- (id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3;
- (id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3;
- (void)setupTrafficIncidents;

@end
