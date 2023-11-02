
@interface VGExternalAccessoryState : NSObject {
    NSNumber * _activeConnector;
    NSNumber * _batteryCharge;
    NSString * _chargingArguments;
    NSString * _colorHex;
    NSString * _consumptionArguments;
    NSMeasurement * _currentBatteryCapacity;
    NSMeasurement * _currentEVRange;
    NSString * _displayName;
    bool  _isCharging;
    NSString * _manufacturer;
    NSString * _mapsDisplayName;
    NSMeasurement * _maxBatteryCapacity;
    NSMeasurement * _maxEVRange;
    NSMeasurement * _minBatteryCapacity;
    NSString * _model;
    NSString * _name;
    NSDictionary * _powerByConnector;
    NSNumber * _supportedConnectors;
    NSString * _year;
}

@property (nonatomic, readonly) NSNumber *activeConnector;
@property (nonatomic, retain) NSNumber *batteryCharge;
@property (nonatomic, retain) NSString *chargingArguments;
@property (nonatomic, retain) NSString *colorHex;
@property (nonatomic, retain) NSString *consumptionArguments;
@property (nonatomic, retain) NSMeasurement *currentBatteryCapacity;
@property (nonatomic, retain) NSMeasurement *currentEVRange;
@property (nonatomic, readonly) bool isCharging;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) NSMeasurement *maxBatteryCapacity;
@property (nonatomic, retain) NSMeasurement *maxEVRange;
@property (nonatomic, retain) NSMeasurement *minBatteryCapacity;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSDictionary *powerByConnector;
@property (nonatomic) NSNumber *supportedConnectors;
@property (nonatomic, retain) NSString *year;

- (void).cxx_destruct;
- (void)_updateWithVehicleInfo:(id)arg1;
- (id)activeConnector;
- (id)batteryCharge;
- (id)chargingArguments;
- (id)colorHex;
- (id)consumptionArguments;
- (id)currentBatteryCapacity;
- (id)currentEVRange;
- (id)description;
- (bool)isCharging;
- (id)manufacturer;
- (id)maxBatteryCapacity;
- (id)maxEVRange;
- (id)minBatteryCapacity;
- (id)model;
- (id)name;
- (id)powerByConnector;
- (void)setBatteryCharge:(id)arg1;
- (void)setChargingArguments:(id)arg1;
- (void)setColorHex:(id)arg1;
- (void)setConsumptionArguments:(id)arg1;
- (void)setCurrentBatteryCapacity:(id)arg1;
- (void)setCurrentEVRange:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setMaxBatteryCapacity:(id)arg1;
- (void)setMaxEVRange:(id)arg1;
- (void)setMinBatteryCapacity:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSupportedConnectors:(id)arg1;
- (void)setYear:(id)arg1;
- (id)supportedConnectors;
- (id)year;

@end
