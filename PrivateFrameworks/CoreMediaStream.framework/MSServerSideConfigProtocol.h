
@interface MSServerSideConfigProtocol : NSObject {
    NSURL * _configURL;
    struct __MSSSCPCContext { 
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
        int (*didFinishCallback)(); 
        int (*didFailAuthenticationCallback)(); 
    }  _context;
    <MSServerSideConfigProtocolDelegate> * _delegate;
    NSString * _personID;
}

@property (nonatomic) <MSServerSideConfigProtocolDelegate> *delegate;
@property (nonatomic, readonly) NSString *personID;

- (void).cxx_destruct;
- (void)_didFailAuthenticationWithError:(id)arg1;
- (void)_didFinishWithResponse:(id)arg1 error:(id)arg2;
- (void)abort;
- (void)dealloc;
- (id)delegate;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)personID;
- (void)queryConfiguration;
- (void)setDelegate:(id)arg1;

@end
