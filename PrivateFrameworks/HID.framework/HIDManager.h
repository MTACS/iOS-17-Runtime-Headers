
@interface HIDManager : NSObject {
    bool  _activated;
    id /* block */  _cancelHandler;
    id /* block */  _deviceNotificationHandler;
    id /* block */  _elementHandler;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _handlerLock;
    id /* block */  _inputReportHandler;
    struct __IOHIDManager { } * _manager;
}

@property (readonly) NSArray *devices;

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (void)close;
- (void)dealloc;
- (id)description;
- (id)devices;
- (id)init;
- (id)initWithOptions:(long long)arg1;
- (void)open;
- (void)openWithOptions:(long long)arg1;
- (id)propertyForKey:(id)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setDeviceMatching:(id)arg1;
- (void)setDeviceNotificationHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInputElementHandler:(id /* block */)arg1;
- (void)setInputElementMatching:(id)arg1;
- (void)setInputReportHandler:(id /* block */)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;

@end
