
@protocol TIUserModelConfigurationDelegate <NSObject>

@required

- (NSArray *)durableCounterKeys;
- (NSDictionary *)settingsDictionary;

@optional

- (Class)userModelValuesClass;

@end
