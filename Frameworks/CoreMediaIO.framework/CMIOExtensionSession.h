
@interface CMIOExtensionSession : NSObject {
    <CMIOExtensionSessionDelegate> * _delegate;
    NSMutableDictionary * _extensions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_xpc_object> * _registerExtensionServiceConnection;
}

@property (nonatomic, readonly) <CMIOExtensionSessionDelegate> *delegate;
@property (nonatomic, readonly, copy) NSDictionary *extensions;

+ (id)sessionWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)extensions;
- (id)initWithDelegate:(id)arg1;

@end
