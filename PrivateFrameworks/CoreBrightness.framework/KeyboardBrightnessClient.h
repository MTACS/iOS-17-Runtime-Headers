
@interface KeyboardBrightnessClient : NSObject {
    NSObject<OS_os_log> * _logHandle;
    BrightnessSystemClient * bsc;
}

- (float)backlightLevelForKeyboard:(unsigned long long)arg1;
- (float)brightnessForKeyboard:(unsigned long long)arg1;
- (id)copyKeyboardBacklightIDs;
- (void)dealloc;
- (bool)enableAutoBrightness:(bool)arg1 forKeyboard:(unsigned long long)arg2;
- (double)idleDimTimeForKeyboard:(unsigned long long)arg1;
- (id)init;
- (bool)isAmbientFeatureAvailableOnKeyboard:(unsigned long long)arg1;
- (bool)isAutoBrightnessEnabledForKeyboard:(unsigned long long)arg1;
- (bool)isBacklightDimmedOnKeyboard:(unsigned long long)arg1;
- (bool)isBacklightSaturatedOnKeyboard:(unsigned long long)arg1;
- (bool)isBacklightSuppressedOnKeyboard:(unsigned long long)arg1;
- (bool)isIdleDimmingSuspendedOnKeyboard:(unsigned long long)arg1;
- (bool)isKeyboardBuiltIn:(unsigned long long)arg1;
- (void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 block:(id /* block */)arg3;
- (bool)setBrightness:(float)arg1 fadeSpeed:(int)arg2 commit:(bool)arg3 forKeyboard:(unsigned long long)arg4;
- (bool)setBrightness:(float)arg1 forKeyboard:(unsigned long long)arg2;
- (bool)setIdleDimTime:(double)arg1 forKeyboard:(unsigned long long)arg2;
- (bool)suspendIdleDimming:(bool)arg1 forKeyboard:(unsigned long long)arg2;
- (void)unregisterKeyboardNotificationBlock;

@end
