
@protocol SRRequestReading <SRRequesting>

@required

- (NSString *)bundleIdentifier;
- (NSString *)deviceIdentifier;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setDeviceIdentifier:(NSString *)arg1;

@end
