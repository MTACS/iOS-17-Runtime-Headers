
@interface BMDeviceBluetooth : BMEventBase <BMStoreData> {
    NSString * _address;
    bool  _appleAudioDevice;
    int  _batteryLevelHeadphoneCase;
    int  _batteryLevelHeadphoneLeft;
    int  _batteryLevelHeadphoneRight;
    int  _deviceType;
    bool  _hasAppleAudioDevice;
    bool  _hasBatteryLevelHeadphoneCase;
    bool  _hasBatteryLevelHeadphoneLeft;
    bool  _hasBatteryLevelHeadphoneRight;
    bool  _hasProductID;
    bool  _hasStarting;
    bool  _hasUserWearing;
    NSString * _name;
    int  _productID;
    bool  _starting;
    bool  _userWearing;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) bool appleAudioDevice;
@property (nonatomic, readonly) int batteryLevelHeadphoneCase;
@property (nonatomic, readonly) int batteryLevelHeadphoneLeft;
@property (nonatomic, readonly) int batteryLevelHeadphoneRight;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceType;
@property (nonatomic) bool hasAppleAudioDevice;
@property (nonatomic) bool hasBatteryLevelHeadphoneCase;
@property (nonatomic) bool hasBatteryLevelHeadphoneLeft;
@property (nonatomic) bool hasBatteryLevelHeadphoneRight;
@property (nonatomic) bool hasProductID;
@property (nonatomic) bool hasStarting;
@property (nonatomic) bool hasUserWearing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int productID;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userWearing;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)address;
- (bool)appleAudioDevice;
- (int)batteryLevelHeadphoneCase;
- (int)batteryLevelHeadphoneLeft;
- (int)batteryLevelHeadphoneRight;
- (unsigned int)dataVersion;
- (id)description;
- (int)deviceType;
- (bool)hasAppleAudioDevice;
- (bool)hasBatteryLevelHeadphoneCase;
- (bool)hasBatteryLevelHeadphoneLeft;
- (bool)hasBatteryLevelHeadphoneRight;
- (bool)hasProductID;
- (bool)hasStarting;
- (bool)hasUserWearing;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAddress:(id)arg1 name:(id)arg2 productID:(id)arg3 starting:(id)arg4 deviceType:(int)arg5 batteryLevelHeadphoneCase:(id)arg6 batteryLevelHeadphoneRight:(id)arg7 batteryLevelHeadphoneLeft:(id)arg8 appleAudioDevice:(id)arg9 userWearing:(id)arg10;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)name;
- (int)productID;
- (id)serialize;
- (void)setHasAppleAudioDevice:(bool)arg1;
- (void)setHasBatteryLevelHeadphoneCase:(bool)arg1;
- (void)setHasBatteryLevelHeadphoneLeft:(bool)arg1;
- (void)setHasBatteryLevelHeadphoneRight:(bool)arg1;
- (void)setHasProductID:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (void)setHasUserWearing:(bool)arg1;
- (bool)starting;
- (bool)userWearing;
- (void)writeTo:(id)arg1;

@end
