
@interface _SYQueuedStartSession : NSObject {
    id /* block */  _completion;
    SYStartSyncSession * _request;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) SYStartSyncSession *request;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)request;

@end
