
@interface _AAURLSessionConfigurationTask : NSObject <AAURLSessionTaskProtocol> {
    id /* block */  _completion;
    <AAURLSessionTaskProtocol> * _configurationTask;
    struct { 
        unsigned int isCanceled : 1; 
        unsigned int isFetchingConfiguration : 1; 
    }  _flags;
    NSURLRequest * _originalRequest;
    AAURLSession * _session;
    <AAURLSessionTaskProtocol> * _sessionTask;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURLRequest *originalRequest;
@property (nonatomic, readonly) AAURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initiateSessionTaskWithConfiguration:(id)arg1;
- (void)_invokeCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_unfairLock_initiateConfigurationTask;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithSession:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (id)originalRequest;
- (void)resume;
- (id)session;
- (void)suspend;

@end
