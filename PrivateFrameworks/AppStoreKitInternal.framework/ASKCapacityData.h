
@interface ASKCapacityData : NSObject {
    NSNumber * _totalDataAvailable;
    NSNumber * _totalDataCapacity;
    NSNumber * _totalDiskCapacity;
    NSNumber * _totalSystemAvailable;
    NSNumber * _totalSystemCapacity;
}

@property (nonatomic, retain) NSNumber *totalDataAvailable;
@property (nonatomic, retain) NSNumber *totalDataCapacity;
@property (nonatomic, retain) NSNumber *totalDiskCapacity;
@property (nonatomic, retain) NSNumber *totalSystemAvailable;
@property (nonatomic, retain) NSNumber *totalSystemCapacity;

- (void).cxx_destruct;
- (id)init;
- (void)setTotalDataAvailable:(id)arg1;
- (void)setTotalDataCapacity:(id)arg1;
- (void)setTotalDiskCapacity:(id)arg1;
- (void)setTotalSystemAvailable:(id)arg1;
- (void)setTotalSystemCapacity:(id)arg1;
- (id)totalDataAvailable;
- (id)totalDataCapacity;
- (id)totalDiskCapacity;
- (id)totalSystemAvailable;
- (id)totalSystemCapacity;

@end
