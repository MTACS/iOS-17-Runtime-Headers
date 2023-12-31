
@interface HDFitnessMachineConnection : NSObject {
    <HKFitnessMachineConnectionClientInterface> * _client;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) <HKFitnessMachineConnectionClientInterface> *client;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)client;
- (id)initWithUUID:(id)arg1 client:(id)arg2;
- (id)uuid;

@end
