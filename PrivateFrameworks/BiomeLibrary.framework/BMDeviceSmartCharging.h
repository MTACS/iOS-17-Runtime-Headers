
@interface BMDeviceSmartCharging : BMEventBase <BMStoreData> {
    int  _batteryLevel;
    bool  _hasBatteryLevel;
    bool  _hasPredictedEndOfCharge;
    bool  _hasTargetSoC;
    int  _mode;
    int  _obcEvent;
    double  _predictedEndOfCharge;
    int  _targetSoC;
}

@property (nonatomic, readonly) int batteryLevel;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBatteryLevel;
@property (nonatomic) bool hasPredictedEndOfCharge;
@property (nonatomic) bool hasTargetSoC;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int mode;
@property (nonatomic, readonly) int obcEvent;
@property (nonatomic, readonly) double predictedEndOfCharge;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int targetSoC;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (int)batteryLevel;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasBatteryLevel;
- (bool)hasPredictedEndOfCharge;
- (bool)hasTargetSoC;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBatteryLevel:(id)arg1 targetSoC:(id)arg2 predictedEndOfCharge:(id)arg3 mode:(int)arg4 obcEvent:(int)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)mode;
- (int)obcEvent;
- (double)predictedEndOfCharge;
- (id)serialize;
- (void)setHasBatteryLevel:(bool)arg1;
- (void)setHasPredictedEndOfCharge:(bool)arg1;
- (void)setHasTargetSoC:(bool)arg1;
- (int)targetSoC;
- (void)writeTo:(id)arg1;

@end
