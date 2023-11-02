
@interface AEPreferencesProvider : NSObject {
    AEOSGestalt * _OSGestalt;
}

- (void).cxx_destruct;
- (id)init;
- (id)makePreferences;

@end
