
@interface BMDeviceWiFiAvailabilityStatus : BMEventBase <BMStoreData> {
    bool  _hasIsWiFiSwitchOn;
    bool  _hasQuality;
    bool  _hasStarting;
    bool  _isWiFiSwitchOn;
    unsigned int  _quality;
    bool  _starting;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsWiFiSwitchOn;
@property (nonatomic) bool hasQuality;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isWiFiSwitchOn;
@property (nonatomic, readonly) unsigned int quality;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIsWiFiSwitchOn;
- (bool)hasQuality;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStarting:(id)arg1 isWiFiSwitchOn:(id)arg2 quality:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isWiFiSwitchOn;
- (id)jsonDictionary;
- (unsigned int)quality;
- (id)serialize;
- (void)setHasIsWiFiSwitchOn:(bool)arg1;
- (void)setHasQuality:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (void)writeTo:(id)arg1;

@end
