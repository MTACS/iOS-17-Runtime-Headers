
@interface MPStoreSocialRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <MPStoreSocialRequestOperationDataSource> * _dataSource;
    ICStoreURLRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, readonly) <MPStoreSocialRequestOperationDataSource> *dataSource;
@property (nonatomic, copy) id /* block */ responseHandler;

+ (id)_stringRepresentationForHTTPBodyType:(long long)arg1;
+ (id)_stringRepresentationForHTTPMethod:(long long)arg1;
+ (id)_urlStringForKey:(id)arg1 inBag:(id)arg2;

- (void).cxx_destruct;
- (id)_requestURLFromBag:(id)arg1;
- (void)cancel;
- (id)dataSource;
- (void)execute;
- (id)initWithDataSource:(id)arg1;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;

@end
