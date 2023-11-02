
@interface HIDEventSystemClient : NSObject {
    bool  _activated;
    id /* block */  _cancelHandler;
    struct __IOHIDEventSystemClient { } * _client;
    id /* block */  _eventHandler;
    id /* block */  _filterHandler;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _handlerLock;
    id /* block */  _propertyChangedHandler;
    id /* block */  _resetHandler;
    id /* block */  _serviceHandler;
}

@property (readonly) NSArray *services;

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (struct __IOHIDEventSystemClient { }*)client;
- (void)dealloc;
- (id)description;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 andAttributes:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)services;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEventFilterHandler:(id /* block */)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setMatching:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setPropertyChangedHandler:(id /* block */)arg1 matching:(id)arg2;
- (void)setResetHandler:(id /* block */)arg1;
- (void)setServiceNotificationHandler:(id /* block */)arg1;

@end
