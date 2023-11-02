
@interface BlastDoorWorkoutPreview : NSObject {
    void workoutPreview;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) NSString *configurationName;
@property (nonatomic, readonly) long long configurationType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long goalTypeIdentifier;
@property (nonatomic, readonly) bool isIndoor;

- (void).cxx_destruct;
- (unsigned long long)activityType;
- (id)configurationName;
- (long long)configurationType;
- (id)description;
- (unsigned long long)goalTypeIdentifier;
- (id)init;
- (bool)isIndoor;

@end
