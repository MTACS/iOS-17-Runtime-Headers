
@interface AVTCoreModelColor : NSObject <AVTCacheableResource> {
    AVTColorPreset * _baseColorPreset;
    NSDictionary * _derivedColorsByCategories;
    unsigned long long  _order;
    float  _rangeMax;
    float  _rangeMin;
    struct { 
        long long destination; 
        long long category; 
    }  _settingKind;
    bool  _showSlider;
}

@property (nonatomic, readonly) AVTColorPreset *baseColorPreset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSDictionary *derivedColorsByCategories;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) unsigned long long order;
@property (nonatomic, readonly) float rangeMax;
@property (nonatomic, readonly) float rangeMin;
@property (nonatomic, readonly) struct { long long x1; long long x2; } settingKind;
@property (getter=canShowSlider, nonatomic, readonly) bool showSlider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseColorPreset;
- (bool)canShowSlider;
- (id)copyForCategory:(long long)arg1 destination:(long long)arg2;
- (id)copyForPairedCategory:(long long)arg1;
- (id)copyWithRangeMin:(float)arg1 rangeMax:(float)arg2 showSlider:(bool)arg3;
- (unsigned long long)costForScope:(id)arg1;
- (id)derivedColorsByCategories;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithColorPreset:(id)arg1 settingKind:(struct { long long x1; long long x2; })arg2 order:(unsigned long long)arg3 derivedColorsByCategories:(id)arg4;
- (id)initWithColorPreset:(id)arg1 settingKind:(struct { long long x1; long long x2; })arg2 order:(unsigned long long)arg3 showSlider:(bool)arg4 rangeMin:(float)arg5 rangeMax:(float)arg6 derivedColorsByCategories:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (unsigned long long)order;
- (float)rangeMax;
- (float)rangeMin;
- (bool)requiresEncryption;
- (struct { long long x1; long long x2; })settingKind;
- (id)thumbnail;
- (id)volatileIdentifierForScope:(id)arg1;

@end
