
@interface ARLocationData : NSObject <ARDaemonSecureCoding, ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _ecefFromlocation;
    CLLocation * _location;
    void _locationECEF;
    void _locationLLA;
    bool  _secure;
    double  _timestamp;
    double  _undulation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } ecefFromlocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, readonly) void locationECEF;
@property (nonatomic, readonly) void locationLLA;
@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) double undulation;

+ (id)grabNextFromReader:(id)arg1 timestamp:(double*)arg2;
+ (bool)isAltitudeValid:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendToWriter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ecefFromlocation;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (void)encodeWithCoder:(id)arg1;
- (void)enuFromLocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocation:(id)arg1 timestamp:(double)arg2 secure:(bool)arg3;
- (id)initWithMetadataWrapper:(id)arg1;
- (bool)isAltitudeValid;
- (bool)isEqual:(id)arg1;
- (bool)isSecure;
- (bool)isUndulationValid;
- (id)location;
- (void)locationECEF;
- (void)locationLLA;
- (void)setLocation:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (double)undulation;

@end
