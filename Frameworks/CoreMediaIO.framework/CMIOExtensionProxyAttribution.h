
@interface CMIOExtensionProxyAttribution : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedAttribution;

- (void)addCameraAttribution:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeCameraAttribution:(id)arg1;

@end
