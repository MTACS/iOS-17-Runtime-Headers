
@interface GEORequestResponseMetadataRecorder : NSObject

+ (void)_populateOfflineStateInRRData:(id)arg1 forCohortId:(id)arg2;
+ (void)_populateSessionStateInRRData:(id)arg1;
+ (void)recordDirectionsRequestResponseAnalyticsData:(id)arg1 forCohortId:(id)arg2;
+ (void)recordPlacesRequestResponseAnalyticsData:(id)arg1 forCohortId:(id)arg2;

@end
