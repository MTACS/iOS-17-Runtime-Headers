
@protocol VGOEMApplication <NSObject, VGVehicleStateProviding>

@required

+ (id)new;

- (LSApplicationRecord *)applicationRecord;
- (<VGOEMAppSOCStreaming> *)chargeStreamingDelegate;
- (NSString *)identifier;
- (id)init;
- (id)initWithIdentifier:(NSString *)arg1 applicationRecord:(LSApplicationRecord *)arg2;
- (bool)isEnabled;
- (void)setChargeStreamingDelegate:(id <VGOEMAppSOCStreaming>)arg1;
- (void)setEnabled:(bool)arg1;
- (void)startSendingChargeUpdatesForVehicle:(VGVehicle *)arg1;
- (void)stopSendingChargeUpdatesForVehicle:(VGVehicle *)arg1;

@end
