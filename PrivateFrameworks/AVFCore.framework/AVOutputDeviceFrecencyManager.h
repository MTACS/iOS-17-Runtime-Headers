
@interface AVOutputDeviceFrecencyManager : NSObject

+ (id)_applicationSupportPath;
+ (id)_frecentsContainerPath;
+ (id)_frecentsFilePath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (id)_frecentsWriter;
+ (bool)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)arg1;
+ (double)frecencyScoreForDeviceID:(id)arg1;
+ (void)updateFrecencyListForDeviceID:(id)arg1;

@end
