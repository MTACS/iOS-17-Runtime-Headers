
@interface SKEventCaptiveNetworkPresent : SKEvent {
    NSString * _captiveInterfaceIdentifier;
    NSString * _captiveSSID;
    NSURL * _captiveURL;
}

@property (nonatomic, readonly, copy) NSString *captiveInterfaceIdentifier;
@property (nonatomic, readonly, copy) NSString *captiveSSID;
@property (nonatomic, readonly, copy) NSURL *captiveURL;

- (void).cxx_destruct;
- (id)captiveInterfaceIdentifier;
- (id)captiveSSID;
- (id)captiveURL;
- (id)descriptionWithLevel:(int)arg1;
- (id)initWithCaptiveURL:(id)arg1 interfaceIdentifier:(id)arg2 ssid:(id)arg3;

@end
