
@interface SASProximityMigrationTransferPreparationAction : SASProximityAction {
    NSString * _deviceName;
}

@property (nonatomic, retain) NSString *deviceName;

+ (id)actionFromDictionary:(id)arg1;
+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (id)deviceName;
- (bool)hasResponse;
- (id)requestPayload;
- (void)setDeviceName:(id)arg1;

@end
