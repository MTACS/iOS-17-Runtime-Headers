
@interface MSStreamsProtocol : NSObject {
    <MSStreamsProtocolDelegate> * _delegate;
    NSString * _personID;
}

@property (nonatomic) <MSStreamsProtocolDelegate> *delegate;
@property (nonatomic, readonly) NSURL *deleteURL;
@property (nonatomic, readonly) NSURL *getURL;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) NSURL *putURL;
@property (nonatomic, readonly) NSURL *reauthorizeURL;
@property (nonatomic, readonly) NSURL *resetURL;
@property (nonatomic, readonly) NSURL *uploadCompleteURL;

- (void).cxx_destruct;
- (void)_didFindServerSideConfigurationVersion:(id)arg1;
- (void)_didReceiveRetryAfterDate:(id)arg1;
- (void)_refreshAuthTokenForContext:(struct __MSSPCContext { void *x1; struct __CFString {} *x2; struct __CFString {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; double x6; int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); struct CFURLConnectionClient_V1 {} *x12; struct _CFURLConnection {} *x13; struct __CFData {} *x14; struct __CFHTTPMessage {} *x15; struct __CFError {} *x16; }*)arg1;
- (void)abort;
- (id)delegate;
- (id)deleteURL;
- (id)deviceInfoDict;
- (id)getURL;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)personID;
- (id)putURL;
- (id)reauthorizeURL;
- (id)resetURL;
- (void)setDelegate:(id)arg1;
- (id)uploadCompleteURL;

@end
