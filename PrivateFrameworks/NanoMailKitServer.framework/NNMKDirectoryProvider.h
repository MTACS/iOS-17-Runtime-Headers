
@interface NNMKDirectoryProvider : NSObject <NNMKDirectoryProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *pairedDeviceRegistryPath;
@property (readonly) Class superclass;

+ (void)removePairedDeviceRegistryPathFromUserDefaults;

- (id)pairedDeviceRegistryPath;
- (void)setPairedDeviceRegistryPath:(id)arg1;

@end
