
@interface TRDeviceSetupCancelAction : TRDeviceSetupAction {
    NSError * _error;
}

@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (id)error;
- (id)init;
- (id)initWithError:(id)arg1;

@end
