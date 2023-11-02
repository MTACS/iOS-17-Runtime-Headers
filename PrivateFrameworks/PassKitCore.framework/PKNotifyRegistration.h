
@interface PKNotifyRegistration : NSObject {
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _subregistrations;
    int  _token;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)hasSubregistrations;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (id)name;
- (void)removeInvalidatedSubregistration:(id)arg1;
- (id)subregisterWithHandler:(id /* block */)arg1;

@end
