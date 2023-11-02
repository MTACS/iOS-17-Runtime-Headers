
@interface URLSessionDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate> {
    struct map<unsigned long, std::shared_ptr<SessionTaskContext>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<SessionTaskContext>>>> { 
        struct __tree<std::__value_type<unsigned long, std::shared_ptr<SessionTaskContext>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<SessionTaskContext>>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<SessionTaskContext>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<SessionTaskContext>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<SessionTaskContext>>, std::less<unsigned long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  fTaskHandlers;
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
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addCallbackHandler:(struct shared_ptr<ctu::Http::HttpRequestCallbackHandler> { struct HttpRequestCallbackHandler {} *x1; struct __shared_weak_count {} *x2; })arg1 for:(long long)arg2;
- (void)dealloc;
- (struct shared_ptr<SessionTaskContext> { struct SessionTaskContext {} *x1; struct __shared_weak_count {} *x2; })getContext:(long long)arg1;
- (void)removeCallbackFor:(long long)arg1;

@end
