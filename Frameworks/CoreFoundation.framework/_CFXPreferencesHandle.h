
@interface _CFXPreferencesHandle : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned int  overrideEUID;
    _CFXPreferences * prefs;
}

- (id)copyPrefs;
- (void)dealloc;
- (id)init;
- (void)setEUIDOverride:(unsigned int)arg1;

@end
