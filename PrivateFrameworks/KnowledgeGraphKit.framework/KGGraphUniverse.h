
@interface KGGraphUniverse : NSObject {
    NSMutableDictionary * _graphManagerByURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSMutableDictionary *graphManagerByURL;

+ (void)closeDatabaseAtURL:(id)arg1 completion:(id /* block */)arg2;
+ (bool)hasManagerForGraphStoreAtURL:(id)arg1;
+ (void)initialize;
+ (id)instance;
+ (id)managerForGraphStoreAtURL:(id)arg1 entityFactory:(id)arg2;
+ (void)releaseManagerForGraphStoreAtURL:(id)arg1;
+ (bool)swapDatabaseFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)closeDatabaseAtURL:(id)arg1 completion:(id /* block */)arg2;
- (id)graphManagerByURL;
- (bool)hasManagerForGraphStoreAtURL:(id)arg1;
- (id)init;
- (id)managerForGraphStoreAtURL:(id)arg1 entityFactory:(id)arg2;
- (void)releaseManagerForGraphStoreAtURL:(id)arg1;
- (void)removeDatabaseByURL:(id)arg1;
- (void)setGraphManagerByURL:(id)arg1;
- (bool)swapDatabaseFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

@end
