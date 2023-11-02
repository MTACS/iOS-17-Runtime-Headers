
@interface DKDAAPParser : NSObject {
    bool  _canceled;
    NSMutableArray * _containerStack;
    <DKDAAPParserDelegate> * _delegate;
    NSInputStream * _inputStream;
    long long  _state;
}

@property (getter=isCanceled, nonatomic) bool canceled;
@property (nonatomic, readonly) NSMutableArray *containerStack;
@property (nonatomic) <DKDAAPParserDelegate> *delegate;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (void)_callDelegateDidCancel;
- (void)_callDelegateDidEndContainerCode:(unsigned int)arg1;
- (void)_callDelegateDidFailWithError:(id)arg1;
- (void)_callDelegateDidFinish;
- (void)_callDelegateDidParseDataCode:(unsigned int)arg1 bytes:(char *)arg2 contentLength:(unsigned int)arg3;
- (void)_callDelegateDidStart;
- (void)_callDelegateDidStartContainerCode:(unsigned int)arg1 contentLength:(unsigned int)arg2;
- (bool)_callDelegateShouldParseCode:(unsigned int)arg1;
- (bool)_callDelegateShouldParseCodeAsContainer:(unsigned int)arg1;
- (void)_verifyExpectedEOF;
- (void)cancel;
- (id)containerStack;
- (id)delegate;
- (id)initWithData:(id)arg1;
- (id)initWithStream:(id)arg1;
- (id)inputStream;
- (bool)isCanceled;
- (void)parse;
- (void)setCanceled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (long long)state;

@end
