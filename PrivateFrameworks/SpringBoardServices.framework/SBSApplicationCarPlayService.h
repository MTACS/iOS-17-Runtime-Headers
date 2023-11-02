
@interface SBSApplicationCarPlayService : NSObject

- (void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 inVehicle:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)fetchIconStateForVehicleId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resetIconStateForVehicleId:(id)arg1;
- (void)setIconState:(id)arg1 hiddenIcons:(id)arg2 forVehicleId:(id)arg3;

@end
