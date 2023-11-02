
@interface SBDisplayPortObserver : NSObject {
    <SBDisplayPortObserverDelegate> * _delegate;
    struct IONotificationPort { } * _ioNotificationPort;
    unsigned int  _ioServiceAddedIterator;
    bool  _matchingNotificationsStarted;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _transportNotifiers;
}

@property (nonatomic) <SBDisplayPortObserverDelegate> *delegate;
@property (getter=isDisplayPortConnected, nonatomic, readonly) bool displayPortConnected;
@property (setter=setIONotificationPort:, nonatomic) struct IONotificationPort { }*ioNotificationPort;
@property (nonatomic) unsigned int ioServiceAddedIterator;
@property (nonatomic) bool matchingNotificationsStarted;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *transportNotifiers;

- (void).cxx_destruct;
- (void)_addTransportNotificationForService:(unsigned int)arg1 andRegistryEntryID:(unsigned long long)arg2;
- (void)_handleNotificationForService:(unsigned int)arg1 messageType:(unsigned int)arg2 messageArgument:(void*)arg3;
- (void)_handleServiceAdded:(unsigned int)arg1;
- (void)_notifyDelegate;
- (void)_removeTransportNotificationForRegistryEntryID:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (struct IONotificationPort { }*)ioNotificationPort;
- (unsigned int)ioServiceAddedIterator;
- (bool)isDisplayPortConnected;
- (bool)matchingNotificationsStarted;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setIONotificationPort:(struct IONotificationPort { }*)arg1;
- (void)setIoServiceAddedIterator:(unsigned int)arg1;
- (void)setMatchingNotificationsStarted:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setTransportNotifiers:(id)arg1;
- (bool)startMatchingNotifications;
- (void)stopMatchingNotifications;
- (id)transportNotifiers;

@end
