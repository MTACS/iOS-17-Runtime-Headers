
@interface TAVehicleCategory : NSObject {
    NSDate * _date;
    unsigned long long  _vehicleCategoryType;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) unsigned long long vehicleCategoryType;

+ (unsigned long long)speculateTAVehicleCategoryTypeFromGeoNavigationNotification:(id)arg1;
+ (unsigned long long)speculateTAVehicleCategoryTypeFromVehicleStateNotification:(id)arg1;

- (void).cxx_destruct;
- (id)date;
- (id)initWithTAGeoNavigationNotification:(id)arg1;
- (id)initWithTAVehicularStateNotification:(id)arg1;
- (id)initWithVehicleCategoryType:(unsigned long long)arg1 andDate:(id)arg2;
- (unsigned long long)vehicleCategoryType;

@end
