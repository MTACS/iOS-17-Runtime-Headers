
@interface HDGymKitWorkoutAnalyticEvent : NSObject {
    unsigned long long  _fitnessMachineType;
    NSString * _manufacturer;
    long long  _timeToBeginExperience;
    long long  _workoutEndErrorCode;
}

@property (nonatomic) unsigned long long fitnessMachineType;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic) long long timeToBeginExperience;
@property (nonatomic) long long workoutEndErrorCode;

- (void).cxx_destruct;
- (unsigned long long)fitnessMachineType;
- (id)manufacturer;
- (void)setFitnessMachineType:(unsigned long long)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setTimeToBeginExperience:(long long)arg1;
- (void)setWorkoutEndErrorCode:(long long)arg1;
- (long long)timeToBeginExperience;
- (long long)workoutEndErrorCode;

@end
