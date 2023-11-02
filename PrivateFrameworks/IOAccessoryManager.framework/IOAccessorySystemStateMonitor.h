
@interface IOAccessorySystemStateMonitor : NSObject {
    unsigned int  _discoveryIterator;
    int  _displayNotifyToken;
    NSMutableDictionary * _endpointMap;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    unsigned long long  _pmNotificationHandle;
    unsigned int  _terminationIterator;
    bool  _userActive;
    bool  _userPresent;
}

@property (nonatomic) unsigned int discoveryIterator;
@property (nonatomic) int displayNotifyToken;
@property (nonatomic, retain) NSMutableDictionary *endpointMap;
@property (nonatomic) struct IONotificationPort { }*notificationPort;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) unsigned long long pmNotificationHandle;
@property (nonatomic) unsigned int terminationIterator;
@property (nonatomic) bool userActive;
@property (nonatomic) bool userPresent;

- (void).cxx_destruct;
- (void)addEndpointForService:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)discoveryIterator;
- (int)displayNotifyToken;
- (id)endpointMap;
- (id)init;
- (struct IONotificationPort { }*)notificationPort;
- (id)notificationQueue;
- (void)notifyEndpointsUserActive:(bool)arg1;
- (void)notifyEndpointsUserPresent:(bool)arg1;
- (unsigned long long)pmNotificationHandle;
- (void)processDisplayState;
- (void)removeEndpointForService:(unsigned int)arg1;
- (void)setDiscoveryIterator:(unsigned int)arg1;
- (void)setDisplayNotifyToken:(int)arg1;
- (void)setEndpointMap:(id)arg1;
- (void)setNotificationPort:(struct IONotificationPort { }*)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setPmNotificationHandle:(unsigned long long)arg1;
- (void)setTerminationIterator:(unsigned int)arg1;
- (void)setUserActive:(bool)arg1;
- (void)setUserPresent:(bool)arg1;
- (unsigned int)terminationIterator;
- (bool)userActive;
- (bool)userPresent;

@end
