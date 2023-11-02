
@interface GTUNIXDomainSocketTransport_capture : GTBaseSocketTransport_capture {
    NSObject<OS_dispatch_source> * _connSource;
    int  _mode;
}

@property (nonatomic, retain) NSURL *url;

- (void)_connectClient:(id)arg1 future:(id)arg2;
- (void)_connectServer:(id)arg1 future:(id)arg2;
- (void)_invalidate;
- (id)connect;
- (id)initWithMode:(int)arg1;
- (void)setUrl:(id)arg1;

@end
