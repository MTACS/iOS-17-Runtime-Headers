
@protocol ENExposureDetectionManagerDelegate

@required

- (ENRegion *)activeRegionForExposureDetectionManager:(ENExposureDetectionManager *)arg1;
- (ENAdvertisementDatabaseQuerySession *)exposureDetectionManager:(ENExposureDetectionManager *)arg1 advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)arg2 error:(id*)arg3;
- (void)exposureDetectionManager:(ENExposureDetectionManager *)arg1 errorDetected:(unsigned int)arg2;
- (void)exposureDetectionManager:(ENExposureDetectionManager *)arg1 finishedSessionWithResult:(ENExposureDetectionDaemonSessionResult *)arg2;

@end
