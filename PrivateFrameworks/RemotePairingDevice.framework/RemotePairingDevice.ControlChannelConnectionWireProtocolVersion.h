
@interface RemotePairingDevice.ControlChannelConnectionWireProtocolVersion : NSObject {
    void rawValue;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long rawValue;

+ (id)current;
+ (void)setCurrent:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (long long)rawValue;

@end
