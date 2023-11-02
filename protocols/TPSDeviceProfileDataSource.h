
@protocol TPSDeviceProfileDataSource <NSObject>

@required

- (TPSExperiment *)experiment;
- (TPSTipStatusController *)tipStatusController;

@end
