
@interface HMDFMFQuery : HMFObject {
    id /* block */  _completion;
    NSString * _queryID;
    NSObject<OS_dispatch_queue> * _responseQueue;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly, copy) NSString *queryID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *responseQueue;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)description;
- (id)initWithResponseQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)queryID;
- (id)responseQueue;

@end
