
@interface CHLogServer : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    NSMutableDictionary * _logHandleToDomain;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, readonly) NSMutableDictionary *logHandleToDomain;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (id)init;
- (id)logHandleForDomain:(const char *)arg1;
- (id)logHandleToDomain;

@end
