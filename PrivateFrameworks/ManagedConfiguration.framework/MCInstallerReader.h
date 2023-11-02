
@interface MCInstallerReader : NSObject

+ (void)_setSystemProfileStorageDirectory:(id)arg1 userProfileStorageDirectory:(id)arg2;
+ (id)sharedReader;

- (id)pathsToInstalledProfilesWithFilterFlags:(int)arg1;

@end
