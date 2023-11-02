
@interface BrightnessSystemClient : NSObject {
    id /* block */  _displayNotificationBlock;
    id /* block */  _keyboardNotificationBlock;
    NSObject<OS_os_log> * _logHandle;
    id /* block */  _propertyNotificationBlock;
    BrightnessSystemClientInternal * bsci;
}

- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (id)copyPropertyForKey:(id)arg1 keyboardID:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (bool)isAlsSupported;
- (void)registerDisplayNotificationCallbackBlock:(id /* block */)arg1;
- (void)registerKeyboardNotificationCallbackBlock:(id /* block */)arg1;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)registerNotificationBlock:(id /* block */)arg1 forProperties:(id)arg2;
- (void)registerNotificationForKey:(id)arg1;
- (void)registerNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)registerNotificationForKeys:(id)arg1;
- (void)registerNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)setProperty:(id)arg1 withKey:(id)arg2 andDisplay:(unsigned long long)arg3;
- (bool)setProperty:(id)arg1 withKey:(id)arg2 keyboardID:(unsigned long long)arg3;
- (void)unregisterDisplayNotificationBlock;
- (void)unregisterKeyboardNotificationBlock;
- (void)unregisterNotificationForKey:(id)arg1;
- (void)unregisterNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)unregisterNotificationForKeys:(id)arg1;
- (void)unregisterNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)unregisterNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2;
- (void)unregisterPropertyNotificationBlock;

@end
