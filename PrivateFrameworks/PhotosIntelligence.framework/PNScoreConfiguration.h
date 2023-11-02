
@interface PNScoreConfiguration : NSObject {
    long long  _dataType;
    NSString * _name;
    long long  _themeType;
}

@property (nonatomic, readonly) long long dataType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long themeType;

+ (id)plistPathForPhotoLibrary:(id)arg1 dataType:(long long)arg2;
+ (id)scoreConfigurationNameForDataType:(long long)arg1 withThemeType:(long long)arg2;
+ (id)scoreConfigurationNamePrefixForDataType:(long long)arg1;
+ (id)scoreConfigurationNameSuffixForThemeType:(long long)arg1;

- (void).cxx_destruct;
- (long long)dataType;
- (id)initWithScoreConfigurationDataType:(long long)arg1 scoreConfigurationThemeType:(long long)arg2;
- (id)name;
- (long long)themeType;

@end
