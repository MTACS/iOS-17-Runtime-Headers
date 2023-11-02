
@interface SiriKitRuntime.FlowPluginInfo : NSObject <NSSecureCoding> {
    void isPersonalRequest;
    void sensitivityPolicy;
    void supportsOnDeviceNL;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
