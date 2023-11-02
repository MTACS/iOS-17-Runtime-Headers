
@interface HMICameraActivityZone : HMFObject <HMFLogging, NSSecureCoding> {
    bool  _inclusion;
    NSArray * _points;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInclusion, readonly) bool inclusion;
@property (readonly, copy) NSArray *points;
@property (readonly) Class superclass;

+ (id)activityZonesFromString:(id)arg1 isInclusion:(bool)arg2;
+ (id)filterEvents:(id)arg1 withActivityZones:(id)arg2 motionDetection:(id)arg3 insetPercentageInclusion:(float)arg4 insetPercentageExclusion:(float)arg5;
+ (void)generateAndSubmitStats:(id)arg1 filteredEvents:(id)arg2 motionDetection:(id)arg3 activityZones:(id)arg4;
+ (id)logCategory;
+ (void)submitCoreAnalyticsEvent:(id)arg1 filteringLevel:(id)arg2 numberOfDetectedObjects:(id)arg3;
+ (void)submitCoreAnalyticsEventForActivityZones:(id)arg1 motionScore:(float)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activityZoneType;
- (bool)checkIfObjectIsStaticWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 motionDetection:(id)arg2 eventClass:(Class)arg3;
- (bool)containsEvent:(id)arg1 withInsetPercentage:(float)arg2;
- (bool)containsVectorWithSource:(struct CGPoint { double x1; double x2; })arg1 destination:(struct CGPoint { double x1; double x2; })arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoints:(id)arg1;
- (id)initWithPoints:(id)arg1 isInclusion:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isInclusion;
- (id)jsonReperesentaionOfDetectedObject:(id)arg1 motionDetection:(id)arg2 eventClass:(id)arg3;
- (bool)overlapsWithElipseInsideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)overlapsWithElipseInsideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withInsetPercentage:(float)arg2;
- (id)points;
- (bool)saveToJsonActivityZones:(id)arg1 motionDetection:(id)arg2 videoFragmentUrl:(id)arg3 frameId:(id)arg4 UUID:(id)arg5 detectionID:(id)arg6 zoneID:(id)arg7;

@end
