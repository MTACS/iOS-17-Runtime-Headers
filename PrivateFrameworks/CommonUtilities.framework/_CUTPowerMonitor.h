
@interface _CUTPowerMonitor : NSObject {
    unsigned int  _batteryEntry;
    struct IONotificationPort { } * _batteryIONotifyPort;
    unsigned int  _batteryNotificationRef;
    struct __CFRunLoopSource { } * _batteryRunLoopSource;
    double  _currentLevel;
    NSHashTable * _delegates;
    bool  _isExternalPowerConnected;
    unsigned int  _pmConnection;
    unsigned int  _pmNotifier;
    struct IONotificationPort { } * _pmPort;
}

- (void).cxx_destruct;

@end
