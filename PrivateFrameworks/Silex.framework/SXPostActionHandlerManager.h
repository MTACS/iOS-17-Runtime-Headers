
@interface SXPostActionHandlerManager : NSObject <SXPostActionHandlerManager> {
    NSMutableDictionary * _postActionHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *postActionHandlers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPostActionHandler:(id)arg1 forActionType:(id)arg2;
- (void)handledAction:(id)arg1 state:(unsigned long long)arg2;
- (id)init;
- (id)postActionHandlers;
- (void)removePostActionHandler:(id)arg1 forActionType:(id)arg2;

@end
