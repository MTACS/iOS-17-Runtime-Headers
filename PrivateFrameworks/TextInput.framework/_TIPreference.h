
@interface _TIPreference : NSObject {
    NSString * _approxDateOfBuildInstallKey;
    NSString * _buildAtLastAnalysisKey;
    id  _currentValue;
    id  _defaultValue;
    NSString * _domain;
    NSString * _fallbackKey;
    bool  _isAnalyzed;
    bool  _isCloudSetting;
    bool  _isWatchSync;
    NSString * _key;
}

@property (nonatomic, readonly) NSString *analyzedAtKey;
@property (nonatomic, readonly) NSString *approxDateOfBuildInstallKey;
@property (nonatomic, readonly) NSString *buildAtChangeKey;
@property (nonatomic, readonly) NSString *buildAtLastAnalysisKey;
@property (nonatomic, readonly) NSString *changedAtKey;
@property (nonatomic, retain) id currentValue;
@property (nonatomic, retain) id defaultValue;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *fallbackKey;
@property (nonatomic) bool isAnalyzed;
@property (nonatomic) bool isCloudSetting;
@property (nonatomic) bool isWatchSync;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, readonly) NSString *previousValueKey;

+ (id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3;
+ (id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 fallbackKey:(id)arg4;
+ (id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3 fallbackKey:(id)arg4 isAnalyzed:(bool)arg5;

- (void).cxx_destruct;
- (id)analyzedAtKey;
- (id)approxDateOfBuildInstall;
- (id)approxDateOfBuildInstallKey;
- (id)buildAtChangeKey;
- (id)buildAtLastAnalysis;
- (id)buildAtLastAnalysisKey;
- (id)changedAtKey;
- (id)currentValue;
- (id)defaultValue;
- (id)domain;
- (id)fallbackKey;
- (bool)isAnalyzed;
- (bool)isCloudSetting;
- (bool)isWatchSync;
- (id)key;
- (id)previousValueKey;
- (void)setCurrentValue:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setFallbackKey:(id)arg1;
- (void)setIsAnalyzed:(bool)arg1;
- (void)setIsCloudSetting:(bool)arg1;
- (void)setIsWatchSync:(bool)arg1;
- (void)setKey:(id)arg1;

@end
