
@interface ProxyConfiguration : NSObject {
    NSDictionary * _deviceIdentificationToken;
    NSDictionary * _proxy;
}

@property (nonatomic, readonly) NSDictionary *deviceIdentificationToken;
@property (nonatomic, readonly) NSDictionary *proxy;

+ (id)currentVersion;
+ (bool)shouldRetryForError:(id)arg1;

- (void).cxx_destruct;
- (void)applyToRequest:(id)arg1;
- (id)deviceIdentificationToken;
- (id)initWithDeviceIdentificationToken:(id)arg1;
- (id)proxy;

@end
