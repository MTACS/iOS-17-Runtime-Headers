
@interface FMLLocation : NSObject {
    FMLPlaceMark * _address;
    double  _altitude;
    NSString * _coarseAddressLabel;
    int  _floorLevel;
    double  _horizontalAccuracy;
    NSArray * _labels;
    double  _latitude;
    long long  _locationType;
    double  _longitude;
    double  _speed;
    double  _timestamp;
    long long  _type;
    double  _verticalAccuracy;
}

@property (nonatomic, retain) FMLPlaceMark *address;
@property (nonatomic) double altitude;
@property (nonatomic, copy) NSString *coarseAddressLabel;
@property (nonatomic) int floorLevel;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic, copy) NSArray *labels;
@property (nonatomic) double latitude;
@property (nonatomic) long long locationType;
@property (nonatomic) double longitude;
@property (nonatomic) double speed;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) long long type;
@property (nonatomic) double verticalAccuracy;

- (void).cxx_destruct;
- (id)address;
- (double)altitude;
- (id)coarseAddressLabel;
- (id)debugDescription;
- (id)description;
- (int)floorLevel;
- (double)horizontalAccuracy;
- (id)initWithAddress:(id)arg1 altitude:(double)arg2 longitude:(double)arg3 speed:(double)arg4 floorLevel:(int)arg5 horizontalAccuracy:(double)arg6 labels:(id)arg7 latitude:(double)arg8 timestamp:(double)arg9 verticalAccuracy:(double)arg10 locationType:(long long)arg11 coarseAddressLabel:(id)arg12;
- (id)labels;
- (double)latitude;
- (long long)locationType;
- (id)locationTypeDescription;
- (double)longitude;
- (void)setAddress:(id)arg1;
- (void)setAltitude:(double)arg1;
- (void)setCoarseAddressLabel:(id)arg1;
- (void)setFloorLevel:(int)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLabels:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLocationType:(long long)arg1;
- (void)setLongitude:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)speed;
- (double)timestamp;
- (long long)type;
- (double)verticalAccuracy;

@end
