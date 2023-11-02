
@interface BMDeviceCellularAvailabilityStatus : BMEventBase <BMStoreData> {
    int  _deviceRegistrationStatus;
    int  _deviceType;
    bool  _hasRaw_timeStamp;
    int  _previousDeviceRegistrationStatus;
    double  _raw_timeStamp;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceRegistrationStatus;
@property (nonatomic, readonly) int deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int previousDeviceRegistrationStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timeStamp;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (int)deviceRegistrationStatus;
- (int)deviceType;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTimeStamp:(id)arg1 deviceType:(int)arg2 deviceRegistrationStatus:(int)arg3;
- (id)initWithTimeStamp:(id)arg1 deviceType:(int)arg2 deviceRegistrationStatus:(int)arg3 previousDeviceRegistrationStatus:(int)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)previousDeviceRegistrationStatus;
- (id)serialize;
- (id)timeStamp;
- (void)writeTo:(id)arg1;

@end
