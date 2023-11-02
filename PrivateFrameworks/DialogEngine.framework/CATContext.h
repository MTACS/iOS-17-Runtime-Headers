
@interface CATContext : NSObject {
    long long  _currentTime;
    bool  _isMultiUserEnabled;
    unsigned int  _randomSeed;
    bool  _requiresUserGrounding;
    NSString * _siriLocale;
    NSString * _siriVoiceGender;
    NSDictionary * _userSettings;
}

@property long long currentTime;
@property bool isMultiUserEnabled;
@property unsigned int randomSeed;
@property bool requiresUserGrounding;
@property (nonatomic, retain) NSString *siriLocale;
@property (nonatomic, retain) NSString *siriVoiceGender;
@property (nonatomic, retain) NSDictionary *userSettings;

- (void).cxx_destruct;
- (long long)currentTime;
- (id)init;
- (id)initWithInputLocale:(id)arg1 outputVoiceLocale:(id)arg2;
- (bool)isMultiUserEnabled;
- (unsigned int)randomSeed;
- (bool)requiresUserGrounding;
- (void)setCurrentTime:(long long)arg1;
- (void)setIsMultiUserEnabled:(bool)arg1;
- (void)setRandomSeed:(unsigned int)arg1;
- (void)setRequiresUserGrounding:(bool)arg1;
- (void)setSiriLocale:(id)arg1;
- (void)setSiriVoiceGender:(id)arg1;
- (void)setUserSettings:(id)arg1;
- (id)siriLocale;
- (id)siriVoiceGender;
- (id)toDictionary;
- (id)userSettings;

@end
