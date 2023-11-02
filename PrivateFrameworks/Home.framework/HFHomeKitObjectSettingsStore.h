
@interface HFHomeKitObjectSettingsStore : NSObject

+ (id)setTileSize:(id)arg1 forObject:(id)arg2;
+ (id)setValue:(id)arg1 forSetting:(long long)arg2 onObject:(id)arg3;
+ (id)setValue:(id)arg1 forSetting:(long long)arg2 onObject:(id)arg3 inLocation:(long long)arg4;
+ (id)stringValueForSetting:(long long)arg1 onObject:(id)arg2;
+ (id)tileSizeForObject:(id)arg1;
+ (id)valueForSetting:(long long)arg1 onObject:(id)arg2;
+ (id)valueForSetting:(long long)arg1 onObject:(id)arg2 inLocation:(long long)arg3;

- (void).cxx_destruct;
- (id)init;

@end
