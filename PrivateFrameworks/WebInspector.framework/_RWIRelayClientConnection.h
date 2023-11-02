
@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy> {
    bool  _closed;
    <_RWIRelayClientConnectionDelegate> * _delegate;
    bool  _sleeping;
    NSString * _tag;
}

@property (nonatomic, readonly) <_RWIRelayClientConnectionDelegate> *delegate;
@property (nonatomic) bool sleeping;
@property (nonatomic, copy) NSString *tag;

- (void)_closeAndNotifyDelegate:(bool)arg1;
- (void)close;
- (void)closeFromConnection;
- (void)closeInternal;
- (void)dealloc;
- (id)delegate;
- (void)dispatchRelayMessage:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)sendMessage:(id)arg1;
- (void)setSleeping:(bool)arg1;
- (void)setTag:(id)arg1;
- (bool)sleeping;
- (id)tag;

@end
