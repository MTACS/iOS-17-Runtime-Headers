
@interface AVTAvatarSettingKindValue : NSObject <NSCopying> {
    struct { 
        long long destination; 
        long long category; 
    }  _settingKind;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } settingKind;

+ (id)valueWithSettingKind:(struct { long long x1; long long x2; })arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSettingKind:(struct { long long x1; long long x2; })arg1;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; long long x2; })settingKind;

@end
