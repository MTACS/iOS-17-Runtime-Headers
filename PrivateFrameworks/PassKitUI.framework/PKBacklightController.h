
@interface PKBacklightController : NSObject {
    NSHashTable * _allowers;
    BrightnessSystemClient * _brightnessClient;
    bool  _foregroundActive;
    bool  _isBacklightRamped;
    NSHashTable * _requesters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_changeBacklightMinimumEnabledIfNecessary;
- (void)_updateBacklightNits:(float)arg1 period:(double)arg2 disableWhitePointShift:(bool)arg3;
- (void)beginAllowingBacklightRamping:(id)arg1;
- (void)beginRequestingBacklightRamping:(id)arg1;
- (void)endAllowingBacklightRamping:(id)arg1;
- (void)endRequestingBacklightRamping:(id)arg1;
- (id)init;

@end
