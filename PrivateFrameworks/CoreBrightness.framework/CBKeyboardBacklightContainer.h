
@interface CBKeyboardBacklightContainer : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol> {
    HIDDevice * _device;
    KeyboardBacklight * _keyboardBacklight;
    NSObject<OS_os_log> * _logHandle;
    NSMutableDictionary * _properties;
    bool  _userActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HIDDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (id)copyIdentifiers;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyInternalForKey:(id)arg1;
- (void)dealloc;
- (id)device;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (id)initWithDevice:(id)arg1;
- (void)keyboardBacklightInitialization;
- (bool)keyboardUsesNitUnits:(id)arg1;
- (id)newKeyboardBacklightWithQueue:(id)arg1 device:(id)arg2;
- (bool)removeHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)setPropertyInternal:(id)arg1 forKey:(id)arg2;
- (bool)start;
- (void)stop;

@end
