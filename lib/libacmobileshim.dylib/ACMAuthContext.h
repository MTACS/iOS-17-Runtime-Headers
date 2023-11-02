
@interface ACMAuthContext : ACCAuthContext {
    NSString * _userPreferences;
}

@property (retain) NSString *userPreferences;

- (void)dealloc;
- (bool)isDevicePwnd;
- (id)parametersDictionary;
- (void)setUserPreferences:(id)arg1;
- (id)userPreferences;

@end
