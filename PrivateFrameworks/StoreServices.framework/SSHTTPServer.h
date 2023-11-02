
@interface SSHTTPServer : NSObject <SSHTTPServerRequestHandlerDelegate> {
    bool  _allowsSecure;
    NSMutableDictionary * _definedResponses;
    int  _downloadSpeed;
    NSMutableArray * _incomingRequests;
    short  _port;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    long long  _responsesDelivered;
    NSRunLoop * _runLoop;
    struct __CFSocket { } * _socket;
    int  _state;
    bool  _verbose;
}

@property (nonatomic, readonly) bool allowsSecure;
@property (nonatomic) int downloadSpeed;
@property (nonatomic) short port;
@property (nonatomic, readonly) long long responsesDelivered;
@property (nonatomic, readonly) int state;
@property (nonatomic) bool verbose;

+ (bool)_isPortOccupied:(short)arg1;
+ (id)sharedServer;

- (void).cxx_destruct;
- (void)_handleConnectWithType:(unsigned long long)arg1 handle:(int)arg2;
- (id)_ipAddress;
- (bool)allowsSecure;
- (void)dealloc;
- (int)downloadSpeed;
- (id)init;
- (short)port;
- (void)requestDidFinish:(id)arg1;
- (id /* block */)responseBlockForPath:(id)arg1;
- (long long)responsesDelivered;
- (id)serverLocalhostURL;
- (id)serverURL;
- (void)setDownloadSpeed:(int)arg1;
- (void)setPort:(short)arg1;
- (void)setResponseForPath:(id)arg1 handler:(id /* block */)arg2;
- (void)setVerbose:(bool)arg1;
- (bool)start;
- (int)state;
- (void)stop;
- (bool)verbose;

@end
