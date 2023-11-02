
@interface MPPlaybackEQSetting : NSObject <NSCopying> {
    long long  _preset;
}

@property (nonatomic, readonly) int avPreset;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long preset;

+ (id)allSettings;
+ (id)settingWithName:(id)arg1;
+ (id)settingWithPreset:(long long)arg1;

- (id)_initWithPreset:(long long)arg1;
- (int)avPreset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)localizedName;
- (id)name;
- (long long)preset;

@end
