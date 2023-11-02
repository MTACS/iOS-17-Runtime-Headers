
@interface IMRequirementLogger : NSObject {
    const char * _categoryOverride;
    unsigned char  _loggingLevel;
    bool  _throwFailures;
}

@property const char *categoryOverride;
@property unsigned char loggingLevel;
@property bool throwFailures;

+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)sharedInstance;

- (const char *)categoryOverride;
- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned char)loggingLevel;
- (struct IMRequirementFailed_t { char *x1; bool x2; bool x3; unsigned char x4; })requirementDidFail:(const char *)arg1;
- (void)setCategoryOverride:(const char *)arg1;
- (void)setLoggingLevel:(unsigned char)arg1;
- (void)setThrowFailures:(bool)arg1;
- (bool)throwFailures;
- (void)updateSettingsFromUserDefaults;

@end
