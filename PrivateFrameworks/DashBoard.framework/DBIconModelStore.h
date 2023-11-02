
@interface DBIconModelStore : SBIconModelPropertyListFileStore {
    NSString * _vehicleId;
}

@property (nonatomic, readonly) NSString *vehicleId;

- (void).cxx_destruct;
- (id)_iconListsByFlatteningPages:(id)arg1;
- (id)initWithVehicleId:(id)arg1;
- (id)loadCurrentIconState:(id*)arg1;
- (bool)saveCurrentIconState:(id)arg1 error:(id*)arg2;
- (bool)saveDesiredIconState:(id)arg1 error:(id*)arg2;
- (id)vehicleId;

@end
