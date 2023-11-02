
@interface DMCRFMBDeviceEnvironment : NSObject <DMCRFDeviceEnvironment>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_shouldIncludeApp:(id)arg1;
- (id)installedAppBundleIdentifiers;

@end
