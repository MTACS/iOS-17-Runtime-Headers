
@interface VGOEMApplication : NSObject <INIntentResponseObserver, VGOEMApplication> {
    NSArray * _allowedFormulaIDs;
    LSApplicationRecord * _applicationRecord;
    INCExtensionConnection * _chargeStreamingConnection;
    <VGOEMAppSOCStreaming> * _chargeStreamingDelegate;
    bool  _enabled;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSArray *allowedFormulaIDs;
@property (nonatomic, readonly) LSApplicationRecord *applicationRecord;
@property (nonatomic) <VGOEMAppSOCStreaming> *chargeStreamingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_VGChargingConnectorTypeOptionFromINCarChargingConnectorType:(id)arg1;
- (unsigned long long)_VGChargingConnectorTypeOptionsFromINCarChargingConnectorTypes:(id)arg1;
- (id)_connectionWithIntent:(id)arg1;
- (void)_createChargeStreamingConnectionIfNeededForVehicle:(id)arg1;
- (bool)_isValidConsumptionModelForResponse:(id)arg1;
- (id)_powerByConnectorDictionaryFromCar:(id)arg1;
- (id)_vehicleStateFromResponse:(id)arg1 error:(id*)arg2;
- (id)_vehiclesFromListCarsIntentResponse:(id)arg1;
- (id)allowedFormulaIDs;
- (id)applicationRecord;
- (id)chargeStreamingDelegate;
- (id)description;
- (void)getStateOfChargeForVehicle:(id)arg1 completion:(id /* block */)arg2;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 applicationRecord:(id)arg2;
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)listCarsWithCompletion:(id /* block */)arg1;
- (void)setAllowedFormulaIDs:(id)arg1;
- (void)setChargeStreamingDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)startSendingChargeUpdatesForVehicle:(id)arg1;
- (void)stopSendingChargeUpdatesForVehicle:(id)arg1;

@end
