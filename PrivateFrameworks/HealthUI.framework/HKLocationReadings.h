
@interface HKLocationReadings : NSObject <NSSecureCoding> {
    NSArray * _allValidLocations;
    double  _averageSpeed;
    double  _bottomSpeed;
    NSArray * _inOrderLocationArrays;
    bool  _isSmoothed;
    double  _topSpeed;
    HKWorkout * _workout;
}

@property (nonatomic, readonly) NSArray *allValidLocations;
@property (nonatomic, readonly) double averageSpeed;
@property (nonatomic, readonly) double bottomSpeed;
@property (nonatomic, readonly) NSArray *inOrderLocationArrays;
@property (nonatomic, readonly) bool isSmoothed;
@property (nonatomic, readonly) double topSpeed;
@property (nonatomic, readonly) HKWorkout *workout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_calculateSpeeds;
- (void)_filterLocationsByActiveTimePeriod:(id)arg1;
- (id)allValidLocations;
- (double)averageSpeed;
- (double)bottomSpeed;
- (long long)count;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstObject;
- (id)inOrderLocationArrays;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 workout:(id)arg2;
- (id)initWithLocations:(id)arg1 workout:(id)arg2 isSmoothed:(bool)arg3;
- (bool)isSmoothed;
- (id)lastObject;
- (double)topSpeed;
- (id)workout;

@end
