
@interface BAAppStoreProgressConfiguration : NSObject <BAAppStoreProgressObserverConfiguring, NSSecureCoding> {
    NSSet * _appBundleIdentifiers;
    NSMutableDictionary * _duplicateEventCache;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _updateHandler;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAppBundleIdentifiers:(id)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;

@end
