
@interface PMDevice : NSObject {
    void deviceImageSymbolName;
    void deviceName;
    void operatingSystemName;
    void operatingSystemVersion;
}

@property (nonatomic, readonly) NSString *deviceImageSymbolName;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *operatingSystemName;
@property (nonatomic, readonly) NSString *operatingSystemVersion;

- (void).cxx_destruct;
- (id)deviceImageSymbolName;
- (id)deviceName;
- (id)init;
- (id)initWithDeviceName:(id)arg1 operatingSystemName:(id)arg2 operatingSystemVersion:(id)arg3 deviceImageSymbolName:(id)arg4;
- (id)operatingSystemName;
- (id)operatingSystemVersion;

@end
