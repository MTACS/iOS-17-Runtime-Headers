
@interface HMIVideoAnalyzerResultActivityZoneFilter : HMIVideoAnalyzerResultFilter <HMFLogging> {
    NSArray * _activityZones;
    NSArray * _motionDetections;
}

@property (readonly) NSArray *activityZones;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *motionDetections;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)activityZones;
- (id)applyWithFrameResult:(id)arg1;
- (id)initWithActivityZones:(id)arg1 motionDetections:(id)arg2;
- (id)motionDetections;

@end
