
@interface PIPortraitAdjustmentController : PIAdjustmentController {
    long long  _version;
}

@property (nonatomic, readonly) double defaultStrength;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSDictionary *portraitInfo;
@property (nonatomic, copy) NSNumber *spillMatteAllowed;
@property (nonatomic) double strength;
@property (nonatomic) long long version;

+ (id)kindKey;
+ (id)portraitInfoKey;
+ (id)spillMatteAllowedKey;
+ (id)strengthKey;

- (bool)canRenderPortraitEffect;
- (double)defaultStrength;
- (id)initWithAdjustment:(id)arg1;
- (bool)isSettingEqual:(id)arg1 forKey:(id)arg2;
- (id)kind;
- (id)pasteKeysForMediaType:(long long)arg1;
- (id)portraitInfo;
- (void)setKind:(id)arg1;
- (void)setPortraitInfo:(id)arg1;
- (void)setSpillMatteAllowed:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)setVersion:(long long)arg1;
- (id)spillMatteAllowed;
- (double)strength;
- (long long)version;

@end
