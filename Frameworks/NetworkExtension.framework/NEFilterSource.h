
@interface NEFilterSource : NSObject {
    unsigned long long  _byteInboundCount;
    unsigned long long  _byteOutboundCount;
    unsigned int  _controlUnit;
    NSURLRequest * _currentRequest;
    NSURLResponse * _currentResponse;
    long long  _direction;
    NWPathEvaluator * _evaluator;
    bool  _expectRemediation;
    NSUUID * _flowUUID;
    struct ne_filter_globals { } * _globals;
    unsigned long long  _lastPendingDataStartIndex;
    unsigned long long  _lastSendDataLength;
    NSString * _organization;
    NSURL * _parentURL;
    unsigned long long  _passLength;
    unsigned long long  _peekIndex;
    NSMutableData * _pendingData;
    unsigned long long  _pendingDataStartIndex;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registered;
    NSString * _remediationButtonText;
    NSString * _remediationURL;
    NSObject<OS_dispatch_group> * _sendDataGroup;
    unsigned long long  _socketIdentifier;
    NSString * _sourceAppIdentifier;
    int  _sourceAppPid;
    long long  _status;
    NSURL * _url;
    NSString * _urlAppendString;
}

@property (readonly) long long direction;
@property (readonly) unsigned long long socketIdentifier;
@property (copy) NSString *sourceAppIdentifier;
@property int sourceAppPid;
@property (readonly) long long status;
@property (retain) NSURL *url;

+ (bool)filterRequired;
+ (void)setDelegation:(struct { unsigned int x1[8]; }*)arg1;

- (void).cxx_destruct;
- (void)addData:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dataCompleteWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)direction;
- (void)finishedLoadingWithDecisionHandler:(id /* block */)arg1;
- (id)initWithDecisionQueue:(id)arg1;
- (id)initWithURL:(id)arg1 direction:(long long)arg2 socketIdentifier:(unsigned long long)arg3;
- (void)receivedData:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)receivedResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)remediateWithDecisionHandler:(id /* block */)arg1;
- (void)setSourceAppIdentifier:(id)arg1;
- (void)setSourceAppPid:(int)arg1;
- (void)setUrl:(id)arg1;
- (unsigned long long)socketIdentifier;
- (id)sourceAppIdentifier;
- (int)sourceAppPid;
- (long long)status;
- (id)url;
- (void)willSendRequest:(id)arg1 decisionHandler:(id /* block */)arg2;

@end
