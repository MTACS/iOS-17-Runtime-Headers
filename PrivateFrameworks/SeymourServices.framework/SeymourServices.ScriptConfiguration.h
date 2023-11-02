
@interface SeymourServices.ScriptConfiguration : NSObject <SeymourServices.ScriptConfigurationExport> {
    void platform;
}

@property (nonatomic, readonly) bool disableHTTPCaching;
@property (nonatomic, readonly) NSString *platformName;
@property (nonatomic, readonly) bool useLocalEndpoint;
@property (nonatomic, readonly) bool useSimulatorBag;

- (bool)disableHTTPCaching;
- (id)init;
- (id)platformName;
- (bool)useLocalEndpoint;
- (bool)useSimulatorBag;

@end
