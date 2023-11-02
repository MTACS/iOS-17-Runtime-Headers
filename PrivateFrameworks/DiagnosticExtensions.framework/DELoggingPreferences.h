
@interface DELoggingPreferences : NSObject

+ (id)_subsystemPayloadForURL:(id)arg1 error:(id*)arg2;
+ (id)combinedLoggingPayloadForURLs:(id)arg1 error:(id*)arg2;
+ (void)installLoggingProfile:(id)arg1 sessionIdentifier:(id)arg2 extensionIdentifier:(id)arg3 error:(id*)arg4;
+ (id)loggingPayloadForURL:(id)arg1 error:(id*)arg2;
+ (id)managedLoggingProfilesDirectory;
+ (id)managedLoggingProfilesDirectoryForSessionIdentifier:(id)arg1 createIfNeeded:(bool)arg2 error:(id*)arg3;
+ (unsigned long long)numberOfManagedLoggingPreferences;
+ (id)removeLoggingProfileForSessionIdentifier:(id)arg1 extensionIdentifier:(id)arg2 error:(id*)arg3;

@end
