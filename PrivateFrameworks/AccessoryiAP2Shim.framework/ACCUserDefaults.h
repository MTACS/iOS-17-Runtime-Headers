
@interface ACCUserDefaults : NSUserDefaults

+ (id)sharedDefaults;
+ (id)sharedDefaultsIapd;
+ (id)sharedDefaultsLogging;

- (id)init;

@end
