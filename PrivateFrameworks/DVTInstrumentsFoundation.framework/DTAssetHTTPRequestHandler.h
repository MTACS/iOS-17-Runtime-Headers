
@interface DTAssetHTTPRequestHandler : NSObject <GCDAsyncSocketDelegate> {
    NSSet * _allowedResources;
    DTXChannel * _channel;
    id /* block */  _completion;
    unsigned long long  _dataSent;
    struct __CFHTTPMessage { } * _httpMessage;
    NSString * _identifier;
    bool  _sentHeader;
    _DT_GCDAsyncSocket * _socket;
}

@property (nonatomic, retain) NSSet *allowedResources;
@property (retain) DTXChannel *channel;
@property (copy) id /* block */ completion;
@property unsigned long long dataSent;
@property (readonly) NSString *identifier;
@property bool sentHeader;
@property (retain) _DT_GCDAsyncSocket *socket;

- (void).cxx_destruct;
- (id)allowedResources;
- (id)channel;
- (id /* block */)completion;
- (unsigned long long)dataSent;
- (void)dealloc;
- (id)identifier;
- (id)initWithSocket:(id)arg1 channel:(id)arg2;
- (void)receivedMessage:(id)arg1;
- (void)requestAssetAtPath:(id)arg1;
- (void)sendDataChunk:(id)arg1;
- (bool)sentHeader;
- (void)serveErrorMessageForError:(id)arg1;
- (void)serveResponseAndDisconnect:(struct __CFHTTPMessage { }*)arg1;
- (void)setAllowedResources:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDataSent:(unsigned long long)arg1;
- (void)setSentHeader:(bool)arg1;
- (void)setSocket:(id)arg1;
- (id)socket;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)startReading;

@end
