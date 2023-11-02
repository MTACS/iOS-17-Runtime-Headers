
@interface _SSBDatabaseUpdateFetchDataSessionHandler : NSObject <NSURLSessionDataDelegate> {
    struct shared_ptr<ByteProvider> { 
        struct ByteProvider {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _byteProvider;
    NSError * _error;
    struct unique_ptr<Backend::Google::FetchThreatListUpdatesResponseParser, std::default_delete<Backend::Google::FetchThreatListUpdatesResponseParser>> { 
        struct __compressed_pair<Backend::Google::FetchThreatListUpdatesResponseParser *, std::default_delete<Backend::Google::FetchThreatListUpdatesResponseParser>> { 
            struct FetchThreatListUpdatesResponseParser {} *__value_; 
        } __ptr_; 
    }  _parser;
    int  _provider;
    unsigned long long  _receivedBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)initWithCompletionHandler:(void*)arg1 provider:(int)arg2;

@end
