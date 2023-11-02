
@interface NTKCompanion1stPartyApp : NTKCompanionApp {
    unsigned long long  _complicationType;
    UIImage * _icon;
    NSString * _iconName;
}

@property (nonatomic) unsigned long long complicationType;
@property (nonatomic, copy) NSString *iconName;

+ (id)_allApps;
+ (id)allAppsForDevice:(id)arg1;
+ (id)appForBundleIdentifier:(id)arg1;
+ (id)companionAppWithAppInfo:(struct _NTKCompanion1stPartyInfo { id x1; id x2; unsigned long long x3; id x4; })arg1;
+ (bool)complicationType:(unsigned long long)arg1 mapsToRemovedSystemAppOnDevice:(id)arg2;

- (void).cxx_destruct;
- (id)complication;
- (unsigned long long)complicationType;
- (id)icon;
- (id)iconName;
- (id)initWithAppInfo:(struct _NTKCompanion1stPartyInfo { id x1; id x2; unsigned long long x3; id x4; })arg1;
- (void)setComplicationType:(unsigned long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconName:(id)arg1;

@end
