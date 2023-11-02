
@interface CKDPipeliningInfo : NSObject {
    bool  _isCancelled;
    <CKDOperationPipelining> * _operation;
    NSMutableArray * _perRequestCallbackBlocks;
    NSObject<OS_dispatch_group> * _perRequestCallbackGroup;
    NSObject<OS_dispatch_queue> * _perRequestCallbackQueue;
    bool  _perRequestCallbackQueueSuspended;
    NSObject<OS_dispatch_group> * _perRequestGroup;
    <CKDURLRequestPipelining> * _request;
}

@property (nonatomic) bool isCancelled;
@property (nonatomic) <CKDOperationPipelining> *operation;
@property (nonatomic, retain) NSMutableArray *perRequestCallbackBlocks;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *perRequestCallbackGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *perRequestCallbackQueue;
@property (nonatomic) bool perRequestCallbackQueueSuspended;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *perRequestGroup;
@property (nonatomic, retain) <CKDURLRequestPipelining> *request;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1 operation:(id)arg2;
- (void)addPerRequestCallbackBlock:(id /* block */)arg1;
- (void)cancelAndDisablePerRequestCallbackBlocks;
- (void)dealloc;
- (void)disablePerRequestCallbackBlocks;
- (id)initForUnitTests;
- (id)initWithRequest:(id)arg1 operation:(id)arg2;
- (bool)isCancelled;
- (id)operation;
- (id)perRequestCallbackBlocks;
- (id)perRequestCallbackGroup;
- (id)perRequestCallbackQueue;
- (bool)perRequestCallbackQueueSuspended;
- (id)perRequestGroup;
- (id)request;
- (void)resumeCallbackQueue;
- (void)setIsCancelled:(bool)arg1;
- (void)setOperation:(id)arg1;
- (void)setPerRequestCallbackBlocks:(id)arg1;
- (void)setPerRequestCallbackGroup:(id)arg1;
- (void)setPerRequestCallbackQueue:(id)arg1;
- (void)setPerRequestCallbackQueueSuspended:(bool)arg1;
- (void)setPerRequestGroup:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)suspendCallbackQueue;

@end
