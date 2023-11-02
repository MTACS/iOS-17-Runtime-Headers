
@interface BMDeviceBatteryLevel : BMEventBase <BMStoreData> {
    double  _batteryPercentage;
    bool  _fullyCharged;
    bool  _hasBatteryPercentage;
    bool  _hasFullyCharged;
}

@property (nonatomic, readonly) double batteryPercentage;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool fullyCharged;
@property (nonatomic) bool hasBatteryPercentage;
@property (nonatomic) bool hasFullyCharged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (double)batteryPercentage;
- (unsigned int)dataVersion;
- (id)description;
- (bool)fullyCharged;
- (bool)hasBatteryPercentage;
- (bool)hasFullyCharged;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBatteryPercentage:(id)arg1 fullyCharged:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasBatteryPercentage:(bool)arg1;
- (void)setHasFullyCharged:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
