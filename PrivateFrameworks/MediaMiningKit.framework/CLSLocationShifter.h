
@interface CLSLocationShifter : NSObject {
    NSObject<OS_dispatch_queue> * _locationShiftQueue;
    GEOLocationShifter * _locationShifter;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *locationShiftQueue;
@property (nonatomic, readonly) GEOLocationShifter *locationShifter;

+ (bool)isLocationShiftRequiredForCoordinate:(struct { double x1; double x2; })arg1;
+ (id)sharedLocationShifter;

- (void).cxx_destruct;
- (id)init;
- (id)locationShiftQueue;
- (id)locationShifter;
- (struct { double x1; double x2; })shiftedCoordinateForOriginalCoordinate:(struct { double x1; double x2; })arg1;

@end
