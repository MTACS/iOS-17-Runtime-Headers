
@protocol SeymourServices.ScriptConfigurationExport <JSExport>

@required

- (bool)disableHTTPCaching;
- (NSString *)platformName;
- (bool)useLocalEndpoint;
- (bool)useSimulatorBag;

@end
