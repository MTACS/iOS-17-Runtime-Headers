
@interface IOUSBHostInterestNotificationReference : NSObject {
    IOUSBHostObject * _hostObject;
    NSRecursiveLock * _interestNotificationLock;
    bool  _interestNotificationPortDestroyed;
}

@property IOUSBHostObject *hostObject;
@property (retain) NSRecursiveLock *interestNotificationLock;
@property bool interestNotificationPortDestroyed;

- (void).cxx_destruct;
- (id)hostObject;
- (id)initWithHostObject:(id)arg1;
- (id)interestNotificationLock;
- (bool)interestNotificationPortDestroyed;
- (void)setHostObject:(id)arg1;
- (void)setInterestNotificationLock:(id)arg1;
- (void)setInterestNotificationPortDestroyed:(bool)arg1;

@end
