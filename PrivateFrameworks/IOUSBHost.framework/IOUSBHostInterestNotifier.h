
@interface IOUSBHostInterestNotifier : NSObject {
    int (* _callback;
    bool  _destroyed;
    NSRecursiveLock * _lock;
    unsigned int  _matchingIterator;
    struct IONotificationPort { } * _notificationPortRef;
    unsigned int  _notifier;
    NSObject * _owner;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _service;
}

@property (nonatomic) int (*callback;
@property (nonatomic) bool destroyed;
@property (nonatomic, retain) NSRecursiveLock *lock;
@property (nonatomic) unsigned int matchingIterator;
@property (nonatomic) struct IONotificationPort { }*notificationPortRef;
@property (nonatomic) unsigned int notifier;
@property (nonatomic) NSObject *owner;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned int service;

- (void).cxx_destruct;
- (int (*)callback;
- (void)dealloc;
- (void)destroy;
- (bool)destroyed;
- (id)initWithOwner:(id)arg1 callback:(int (*)arg2;
- (id)initWithOwner:(id)arg1 matchingDictionary:(id)arg2 callback:(int (*)arg3;
- (id)initWithOwner:(id)arg1 service:(unsigned int)arg2 callback:(int (*)arg3;
- (id)lock;
- (unsigned int)matchingIterator;
- (struct IONotificationPort { }*)notificationPortRef;
- (unsigned int)notifier;
- (id)owner;
- (id)queue;
- (unsigned int)service;
- (void)setCallback:(int (*)arg1;
- (void)setDestroyed:(bool)arg1;
- (void)setLock:(id)arg1;
- (void)setMatchingIterator:(unsigned int)arg1;
- (void)setNotificationPortRef:(struct IONotificationPort { }*)arg1;
- (void)setNotifier:(unsigned int)arg1;
- (void)setOwner:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setService:(unsigned int)arg1;

@end
