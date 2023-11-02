
@interface MSDeleteStreamsProtocol : MSStreamsProtocol {
    NSMutableArray * _collectionsInFlight;
    struct _MSDSPCContext { 
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
        int (*didReceiveRetryAfterCallback)(); 
    }  _context;
}

@property (nonatomic) <MSDeleteStreamsProtocolDelegate> *delegate;

- (void).cxx_destruct;
- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2;
- (void)_resetConnectionVariables;
- (void)abort;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)sendDeletionRequestForAssetCollections:(id)arg1;

@end
