
@interface CBPresetsParser : NSObject {
    NSArray * _displayList;
    NSMutableDictionary * _displayPresets;
    NSObject<OS_os_log> * _logHandle;
}

+ (id)sharedInstance;

- (bool)autoBrightnessDisabledForDisplay:(unsigned long long)arg1;
- (bool)brightnessDisabledForDisplay:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (bool)nightShiftDisabled;
- (bool)referenceMode:(unsigned long long)arg1;
- (void)refreshPresetState;
- (void)setDisplayList:(id)arg1;
- (bool)trueToneDisabled;

@end
