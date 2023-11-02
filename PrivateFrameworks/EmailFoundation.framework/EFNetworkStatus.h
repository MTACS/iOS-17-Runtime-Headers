
@interface EFNetworkStatus : NSObject {
    NSObject<OS_nw_path> * _currentPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _currentPathLock;
    NSObject<OS_dispatch_queue> * _monitorQueue;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (getter=isConstrained, nonatomic, readonly) bool constrained;
@property (nonatomic, readonly) NSObject<OS_nw_path> *currentPath;
@property (getter=isExpensive, nonatomic, readonly) bool expensive;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *monitorQueue;
@property (nonatomic, readonly) NSObject<OS_nw_path_monitor> *pathMonitor;

+ (id)cellular;
+ (id)external;
+ (id)wifi;
+ (id)wired;

- (void).cxx_destruct;
- (id)currentPath;
- (id)initWithInterfaceType:(int)arg1;
- (id)initWithPathMonitor:(id)arg1;
- (bool)isAvailable;
- (bool)isConstrained;
- (bool)isExpensive;
- (id)monitorQueue;
- (id)pathMonitor;

@end
