
@interface SDKeyValueStore : NSObject

+ (id)deviceDictionaryForDeviceIdentifier:(id)arg1;
+ (id)devicesDictionary;
+ (void)insertOrUpdateDevice:(id)arg1;
+ (void)synchronize;

@end
