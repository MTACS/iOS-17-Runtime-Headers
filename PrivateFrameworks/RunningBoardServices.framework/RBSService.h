
@interface RBSService : NSObject <RBSConnectionServiceDelegate> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    RBSConnection * _connection;
    <RBSServiceDelegate> * _delegate;
    NSMutableSet * _inheritances;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)saveEndowment:(id)arg1 forKey:(id)arg2 withError:(out id*)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didLoseInheritances:(id)arg1;
- (void)didReceiveInheritances:(id)arg1;
- (id)inheritances;
- (id)init;

@end
