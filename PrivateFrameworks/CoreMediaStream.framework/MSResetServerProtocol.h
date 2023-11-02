
@interface MSResetServerProtocol : MSStreamsProtocol {
    struct __MSRSPCContext { 
        struct __MSSPCContext { 
            void *owner; 
            struct __CFString {} *personID; 
            struct __CFString {} *authToken; 
            struct __CFDictionary {} *deviceInfo; 
            struct __CFDictionary {} *clientHeadersRef; 
            double connectionTimeout; 
            int (*__didReceiveDataCallback)(); 
            int (*__didFinishCallback)(); 
            int (*__didFailAuthenticationCallback)(); 
            int (*__didReceiveServerSideConfigVersionCallback)(); 
            int (*__didReceiveRetryAfterCallback)(); 
            struct CFURLConnectionClient_V1 {} *__client; 
            struct _CFURLConnection {} *__connection; 
            struct __CFData {} *__responseData; 
            struct __CFHTTPMessage {} *__response; 
            struct __CFError {} *__error; 
        } _super; 
        int (*finishedCallback)(); 
        int (*authFailedCallback)(); 
        int (*didReceiveServerSideConfigurationVersionCallback)(); 
    }  _context;
}

- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (void)_coreProtocolDidFinishError:(id)arg1;
- (void)abort;
- (void)dealloc;
- (id)delegate;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)resetServerState;
- (void)setDelegate:(id)arg1;

@end
