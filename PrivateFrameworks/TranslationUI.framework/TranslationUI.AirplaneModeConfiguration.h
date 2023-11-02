
@interface TranslationUI.AirplaneModeConfiguration : NSObject <RadiosPreferencesDelegate> {
    void $__lazy_storage_$_isEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  __enabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  __reachable;
    void radiosPreferences;
    void reachability;
}

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)dealloc;
- (id)init;

@end
