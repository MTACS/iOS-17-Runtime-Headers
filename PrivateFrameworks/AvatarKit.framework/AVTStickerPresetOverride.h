
@interface AVTStickerPresetOverride : NSObject {
    long long  _category;
    NSString * _presetIdentifier;
    NSArray * _unlessIdentifiers;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly, copy) NSString *presetIdentifier;
@property (nonatomic, readonly) NSArray *unlessIdentifiers;

+ (id)presetOverrideFromDictionary:(id)arg1 forCategoryName:(id)arg2;

- (void).cxx_destruct;
- (void)applyToAvatar:(id)arg1 reversionContext:(id)arg2;
- (long long)category;
- (id)initWithCategory:(long long)arg1 presetIdentifier:(id)arg2 unless:(id)arg3;
- (id)presetIdentifier;
- (id)unlessIdentifiers;

@end
