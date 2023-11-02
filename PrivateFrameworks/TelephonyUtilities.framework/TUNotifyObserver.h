
@interface TUNotifyObserver : NSObject <TUNotifyObserver> {
    id /* block */  _callback;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _notificationName;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
}

@property (nonatomic, copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, copy) NSString *notificationName;
@property (getter=isObserving, nonatomic, readonly) bool observing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic) int token;

- (void).cxx_destruct;
- (void)_endObserving;
- (void)beginObserving;
- (id /* block */)callback;
- (void)dealloc;
- (void)endObserving;
- (id)initWithNotificationName:(id)arg1 queue:(id)arg2;
- (id)initWithNotificationName:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (bool)isObserving;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)notificationName;
- (id)queue;
- (void)setCallback:(id /* block */)arg1;
- (void)setNotificationName:(id)arg1;
- (void)setToken:(int)arg1;
- (unsigned long long)state;
- (int)token;

@end
