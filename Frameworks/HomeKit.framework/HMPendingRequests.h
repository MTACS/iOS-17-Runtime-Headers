
@interface HMPendingRequests : NSObject {
    NSMutableArray * _contextLists;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSMutableArray *contextLists;

- (void).cxx_destruct;
- (void)_addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3;
- (id)_retrieveRequestOfType:(long long)arg1 forIdentifier:(id)arg2 remove:(bool)arg3;
- (void)addAccessory:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (void)addAccessoryDescription:(id)arg1 progressBlock:(id)arg2 andCompletionBlock:(id)arg3 forIdentifier:(id)arg4;
- (void)addAction:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (void)addApplicationData:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (void)addCompletionBlock:(id)arg1 forIdentifier:(id)arg2;
- (void)addEvent:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (void)addEvents:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (void)addMediaSystemBuilder:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (void)addProgressHandler:(id)arg1 forAccessoryIdentifier:(id)arg2;
- (void)addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3;
- (void)addTrigger:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3;
- (id)contextLists;
- (id)init;
- (id)removeAccessoryDescriptionForIdentifier:(id)arg1;
- (id)removeAccessoryForIdentifier:(id)arg1;
- (id)removeActionForIdentifier:(id)arg1;
- (id)removeApplicationDataForIdentifier:(id)arg1;
- (id)removeCompletionBlockForIdentifier:(id)arg1;
- (id)removeEventForIdentifier:(id)arg1;
- (id)removeEventsForIdentifier:(id)arg1;
- (id)removeMediaSystemBuilderForIdentifier:(id)arg1;
- (id)removeProgressBlockForIdentifier:(id)arg1;
- (id)removeRequestOfType:(long long)arg1 forIdentifier:(id)arg2;
- (id)removeTriggerForIdentifier:(id)arg1;
- (id)retrieveAccessoryDescriptionForIdentifier:(id)arg1;
- (id)retrieveCompletionBlockForIdentifier:(id)arg1;
- (id)retrieveProgressBlockForIdentifier:(id)arg1;
- (id)retrieveRequestOfType:(long long)arg1 forIdentifier:(id)arg2;
- (void)setContextLists:(id)arg1;
- (id)uuidForAccessoryDescriptionUUID:(id)arg1;

@end
