
@interface BLTClientReplyTimeout : NSObject {
    NSDate * _timeout;
    id /* block */  _timeoutHandler;
}

@property (nonatomic, retain) NSDate *timeout;
@property (nonatomic, copy) id /* block */ timeoutHandler;

- (void).cxx_destruct;
- (void)setTimeout:(id)arg1;
- (void)setTimeoutHandler:(id /* block */)arg1;
- (id)timeout;
- (id /* block */)timeoutHandler;

@end
