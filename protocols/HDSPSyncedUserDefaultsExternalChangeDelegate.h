
@protocol HDSPSyncedUserDefaultsExternalChangeDelegate <NSObject>

@required

- (void)syncedUserDefaultsDidChangeExternally:(id <HDSPSyncedUserDefaults>)arg1;

@optional

- (void)syncedUserDefaults:(id <HDSPSyncedUserDefaults>)arg1 didChangeExternallyForKeys:(NSSet *)arg2;

@end
