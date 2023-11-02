
@interface ENLoggingPrefs : NSObject {
    bool  _rpiLoggingEnabled;
    bool  _sensitiveLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (id)init;
- (bool)isRPILoggingAllowed;
- (bool)isSensitiveLoggingAllowed;
- (void)loadLoggingPrefs;
- (void)setLoggingEntitledApp:(bool)arg1;

@end
