
@interface HMDPersonSettingsManagerDependencyFactory : NSObject <HMDPersonSettingsManagerDependencyFactory>

@property (readonly) <HMDFileManager> *fileManager;
@property (readonly) <HMDPersistentStore> *persistentStore;

- (id)fileManager;
- (id)persistentStore;

@end
