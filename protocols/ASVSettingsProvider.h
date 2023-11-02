
@protocol ASVSettingsProvider <NSObject>

@required

+ (float)boolForKey:(NSString *)arg1;
+ (float)floatForKey:(NSString *)arg1;

- (float)boolForKey:(NSString *)arg1;
- (float)floatForKey:(NSString *)arg1;

@end
