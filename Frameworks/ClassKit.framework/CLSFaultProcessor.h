
@interface CLSFaultProcessor : NSObject <CLSQuery> {
    <CLSFaultProcessorDelegate> * _delegate;
    NSObject<OS_dispatch_group> * _group;
    NSMapTable * _objects;
    NSMapTable * _objectsIdsByParentID;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _relations;
    NSMutableArray * _results;
    NSMutableOrderedSet * _rootObjectIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CLSFaultProcessorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)rootClasses;

- (void).cxx_destruct;
- (void)_addObject:(id)arg1;
- (id)_childParentRelationForObject:(id)arg1;
- (void)_descendIntoObject:(id)arg1 idsToProcess:(id)arg2 enumerationBlock:(id /* block */)arg3;
- (void)_faultObjectsBatch:(id)arg1;
- (void)_faultRelation:(id)arg1 fromObject:(id)arg2;
- (void)_inGroup:(id /* block */)arg1;
- (void)_insertRootObject:(id)arg1;
- (void)_insertRootObjectID:(id)arg1 withChildren:(id)arg2;
- (bool)_isRootObject:(id)arg1;
- (bool)_isRootObject:(id)arg1 withRelation:(id)arg2;
- (oneway void)clientRemote_deliverObject:(id)arg1;
- (oneway void)clientRemote_finishWithOffset:(unsigned long long)arg1 error:(id)arg2;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_itemChanged:(unsigned long long)arg1;
- (void)completionNotify:(id /* block */)arg1;
- (id)delegate;
- (void)enumerate:(id /* block */)arg1;
- (void)faultObject:(id)arg1;
- (void)faultObjects:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)waitUntilDone:(double)arg1;

@end
