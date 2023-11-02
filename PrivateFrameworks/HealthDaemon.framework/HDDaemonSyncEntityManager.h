
@interface HDDaemonSyncEntityManager : NSObject {
    HDDaemon * _daemon;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _lock_allOrderedSyncEntities;
    NSDictionary * _lock_allSyncEntitiesByIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *orderedSyncEntities;
@property (nonatomic, readonly, copy) NSDictionary *syncEntitiesByIdentifier;

- (void).cxx_destruct;
- (id)initWithDaemon:(id)arg1;
- (id)orderedSyncEntities;
- (id)syncEntitiesByIdentifier;

@end
