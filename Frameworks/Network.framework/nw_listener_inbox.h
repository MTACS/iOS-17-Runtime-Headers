
@interface nw_listener_inbox : NSObject {
    NSObject<nw_listener_inbox_delegate> * _delegate;
    NSString * _description;
    NSObject<OS_nw_interface> * _interface;
    int  _level;
    NSObject<OS_nw_endpoint> * _local_endpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _multicast;
    NSObject<OS_nw_parameters> * _parameters;
    unsigned int  _suspended;
}

@property (nonatomic, readonly) NSObject<OS_nw_interface> *interface;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *local_endpoint;
@property (nonatomic) bool multicast;

- (void).cxx_destruct;
- (bool)cancel;
- (id)initWithDelegate:(id)arg1;
- (id)interface;
- (bool)isSuspended;
- (id)local_endpoint;
- (bool)multicast;
- (bool)resume;
- (void)setMulticast:(bool)arg1;
- (id)start;
- (bool)suspend;

@end
