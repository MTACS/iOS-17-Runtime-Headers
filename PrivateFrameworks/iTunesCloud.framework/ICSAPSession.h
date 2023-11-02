
@interface ICSAPSession : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSURL * _certificateURL;
    NSOperationQueue * _operationQueue;
    NSOperationQueue * _prepareFairPlayContextOperationQueue;
    ICStoreRequestContext * _requestContext;
    ICFPSAPContext * _sapContext;
    unsigned int  _sapVersion;
    NSURL * _setupURL;
}

@property (nonatomic, readonly, copy) NSURL *_certificateURL;
@property (nonatomic, readonly) NSOperationQueue *_prepareFairPlayContextOperationQueue;
@property (nonatomic, readonly, copy) ICStoreRequestContext *_requestContext;
@property (setter=_setSAPContext:, nonatomic, retain) ICFPSAPContext *_sapContext;
@property (nonatomic, readonly, copy) NSURL *_setupURL;
@property (nonatomic, readonly) unsigned int sapVersion;

+ (id)sharedSAPSessionWithVersion:(unsigned int)arg1 URLBag:(id)arg2 requestContext:(id)arg3;

- (void).cxx_destruct;
- (id)_certificateURL;
- (id)_initWithVersion:(unsigned int)arg1 certificateURL:(id)arg2 setupURL:(id)arg3 requestContext:(id)arg4;
- (id)_prepareFairPlayContextOperationQueue;
- (id)_requestContext;
- (id)_sapContext;
- (void)_setSAPContext:(id)arg1;
- (id)_setupURL;
- (unsigned int)sapVersion;
- (void)signData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)verifySignatureData:(id)arg1 forData:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end