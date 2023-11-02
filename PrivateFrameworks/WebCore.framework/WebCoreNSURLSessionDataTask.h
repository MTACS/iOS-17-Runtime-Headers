
@interface WebCoreNSURLSessionDataTask : NSObject {
    long long  _countOfBytesExpectedToReceive;
    long long  _countOfBytesExpectedToSend;
    long long  _countOfBytesReceived;
    long long  _countOfBytesSent;
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    }  _currentRequest;
    struct RetainPtr<NSError> { 
        void *m_ptr; 
    }  _error;
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    }  _originalRequest;
    float  _priority;
    struct RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>> { 
        struct PlatformMediaResource {} *m_ptr; 
    }  _resource;
    struct RetainPtr<NSURLResponse> { 
        void *m_ptr; 
    }  _response;
    struct WeakObjCPtr<WebCoreNSURLSession> { 
        id m_weakReference; 
    }  _session;
    long long  _state;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _taskDescription;
    unsigned long long  _taskIdentifier;
}

@property long long countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSError *error;
@property (readonly, copy) NSURLRequest *originalRequest;
@property float priority;
@property (readonly, copy) NSURLResponse *response;
@property WebCoreNSURLSession *session;
@property long long state;
@property (copy) NSString *taskDescription;
@property unsigned long long taskIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancel;
- (void)_resource:(void*)arg1 loadFinishedWithError:(id)arg2 metrics:(const void*)arg3;
- (void)_restart;
- (id)_timingData;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (id)currentRequest;
- (void)dealloc;
- (id)error;
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 request:(id)arg3;
- (id)originalRequest;
- (float)priority;
- (void)resource:(void*)arg1 accessControlCheckFailedWithError:(const void*)arg2;
- (void)resource:(void*)arg1 loadFailedWithError:(const void*)arg2;
- (void)resource:(void*)arg1 receivedData:(void*)arg2;
- (void)resource:(void*)arg1 receivedRedirect:(const void*)arg2 request:(void*)arg3 completionHandler:(void*)arg4;
- (void)resource:(void*)arg1 receivedResponse:(const void*)arg2 completionHandler:(void*)arg3;
- (void)resource:(void*)arg1 sentBytes:(unsigned long long)arg2 totalBytesToBeSent:(unsigned long long)arg3;
- (bool)resource:(void*)arg1 shouldCacheResponse:(const void*)arg2;
- (void)resourceFinished:(void*)arg1 metrics:(const void*)arg2;
- (id)response;
- (void)resume;
- (id)session;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setPriority:(float)arg1;
- (void)setSession:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (long long)state;
- (void)suspend;
- (id)taskDescription;
- (unsigned long long)taskIdentifier;

@end
