
@interface BMContextSyncCellularAvailabilityStatus : BMEventBase <BMStoreData> {
    NSString * _ID;
    int  _deviceRegistrationStatus;
    int  _deviceType;
    NSString * _deviceUUID;
    bool  _hasRaw_timeStamp;
    int  _previousDeviceRegistrationStatus;
    double  _raw_timeStamp;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceRegistrationStatus;
@property (nonatomic, readonly) int deviceType;
@property (nonatomic, readonly) NSString *deviceUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int previousDeviceRegistrationStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timeStamp;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)ID;
- (unsigned int)dataVersion;
- (id)description;
- (int)deviceRegistrationStatus;
- (int)deviceType;
- (id)deviceUUID;
- (id)initByReadFrom:(id)arg1;
- (id)initWithID:(id)arg1 deviceUUID:(id)arg2 timeStamp:(id)arg3 deviceType:(int)arg4 deviceRegistrationStatus:(int)arg5 previousDeviceRegistrationStatus:(int)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)previousDeviceRegistrationStatus;
- (id)serialize;
- (id)timeStamp;
- (void)writeTo:(id)arg1;

@end
