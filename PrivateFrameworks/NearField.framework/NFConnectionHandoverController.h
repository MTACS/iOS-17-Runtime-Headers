
@interface NFConnectionHandoverController : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _state;
    long long  _type;
    unsigned char  _version;
}

@property (readonly) bool initiator;

- (void).cxx_destruct;
- (bool)initiator;
- (void)start;
- (void)stop;

@end
