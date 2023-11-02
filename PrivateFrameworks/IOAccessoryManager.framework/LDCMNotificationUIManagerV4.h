
@interface LDCMNotificationUIManagerV4 : NSObject {
    IOPortLDCMManagerV4 * _ldcmManager;
    struct { 
        bool isNotificationPosted; 
        double lastNotificationTime; 
        bool isReinsertion; 
        struct __CFUserNotification {} *notification; 
        struct __CFRunLoopSource {} *notificationRunLoopSource; 
        struct __CFRunLoop {} *runloop; 
        LDCMNotificationUIManagerV4 *notificationUIManager; 
    }  _liquidNotificationContext;
}

@property (nonatomic) IOPortLDCMManagerV4 *ldcmManager;
@property (nonatomic) struct { bool x1; double x2; bool x3; struct __CFUserNotification {} *x4; struct __CFRunLoopSource {} *x5; struct __CFRunLoop {} *x6; id x7; } liquidNotificationContext;

- (void).cxx_destruct;
- (id)initWithParams:(struct __CFRunLoop { }*)arg1 :(id)arg2;
- (id)ldcmManager;
- (struct { bool x1; double x2; bool x3; struct __CFUserNotification {} *x4; struct __CFRunLoopSource {} *x5; struct __CFRunLoop {} *x6; id x7; })liquidNotificationContext;
- (void)setLdcmManager:(id)arg1;
- (void)setLiquidNotificationContext:(struct { bool x1; double x2; bool x3; struct __CFUserNotification {} *x4; struct __CFRunLoopSource {} *x5; struct __CFRunLoop {} *x6; id x7; })arg1;
- (void)setOverride:(unsigned char)arg1;
- (void)showUI:(struct { bool x1; bool x2; })arg1 :(bool)arg2;

@end
