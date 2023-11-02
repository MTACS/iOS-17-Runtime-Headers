
@interface EMActivityRegistry : NSObject {
    EMRemoteConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _observerWrappersByObserver;
}

@property (retain) EMRemoteConnection *connection;

+ (id)observerInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithRemoteConnection:(id)arg1;
- (id)registerActivityObserver:(id)arg1;
- (void)setConnection:(id)arg1;

@end
