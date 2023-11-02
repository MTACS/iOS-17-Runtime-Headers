
@interface CLSSaveResponse : NSObject <CLSSaveResponse> {
    id /* block */  _completion;
    NSMutableDictionary * _objectsByID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)clientRemote_deliverObject:(id)arg1;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_saveDone:(id)arg1;
- (id /* block */)completion;
- (id)init;
- (id)savedObjectWithObjectID:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;

@end
