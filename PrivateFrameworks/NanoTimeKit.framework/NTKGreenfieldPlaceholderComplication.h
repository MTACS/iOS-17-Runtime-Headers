
@interface NTKGreenfieldPlaceholderComplication : NTKComplication {
    NSString * _appName;
    NSNumber * _appStoreItemId;
    NTKComplication * _complication;
}

@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSNumber *appStoreItemId;
@property (nonatomic, readonly) NTKComplication *complication;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (id)placeholderWithComplication:(id)arg1;
+ (id)placeholderWithComplication:(id)arg1 appStoreItemId:(id)arg2 appName:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)appIdentifier;
- (id)appName;
- (id)appStoreItemId;
- (id)complication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;

@end
