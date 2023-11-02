
@interface VGExternalAccessoryModelFilter : NSObject {
    NSArray * _denylist;
    NSArray * _modelIdAllowlist;
}

@property (nonatomic, retain) NSArray *denylist;
@property (nonatomic, retain) NSArray *modelIdAllowlist;

- (void).cxx_destruct;
- (void)_initializeAllowAndDenylists;
- (bool)allowsVehicleWithModelId:(id)arg1 firmwareId:(id)arg2 year:(id)arg3 model:(id)arg4;
- (id)denylist;
- (id)init;
- (id)modelIdAllowlist;
- (void)setDenylist:(id)arg1;
- (void)setModelIdAllowlist:(id)arg1;

@end
