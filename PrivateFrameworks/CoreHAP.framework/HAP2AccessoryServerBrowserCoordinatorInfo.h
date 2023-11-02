
@interface HAP2AccessoryServerBrowserCoordinatorInfo : NSObject {
    <HAP2AccessoryServerCoordinatorPrivate> * _coordinator;
    NSError * _error;
}

@property (nonatomic, readonly) <HAP2AccessoryServerCoordinatorPrivate> *coordinator;
@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)coordinator;
- (id)error;
- (id)initWithCoordinator:(id)arg1;
- (void)setError:(id)arg1;

@end
