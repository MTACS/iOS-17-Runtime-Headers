
@interface MNTraceVehicleHeadingRow : NSObject <MNTracePlayerTimelineStreamObjectType> {
    double  _timestamp;
    double  _vehicleHeading;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double position;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) double vehicleHeading;

- (double)position;
- (void)setTimestamp:(double)arg1;
- (void)setVehicleHeading:(double)arg1;
- (double)timestamp;
- (double)vehicleHeading;

@end
