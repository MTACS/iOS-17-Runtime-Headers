
@interface BKIOHIDServicePersistentPropertyController : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _defaultsLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _handlersLock;
    NSMutableArray * _handlersLock_handlers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_senderDescriptorKey:(id)arg1;
- (id)allPersistentPropertiesForServicesMatchingDescriptor:(id)arg1;
- (id)init;
- (id)persistentPropertiesForKeys:(id)arg1 forSenderDescriptor:(id)arg2;
- (void)registerHandler:(id)arg1;
- (void)setPersistentProperties:(id)arg1 forSenderDescriptor:(id)arg2;

@end
