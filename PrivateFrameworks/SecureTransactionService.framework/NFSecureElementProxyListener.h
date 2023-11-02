
@interface NFSecureElementProxyListener : NSObject <STSRemoteTransceiverProtocol> {
    NFSecureElementManagerSession * _seSession;
}

@property (nonatomic, retain) NFSecureElementManagerSession *seSession;

- (void).cxx_destruct;
- (id)initWithSTSSession:(id)arg1;
- (id)seSession;
- (void)setSeSession:(id)arg1;
- (id)transceiveWithData:(id)arg1 outError:(id*)arg2;

@end
