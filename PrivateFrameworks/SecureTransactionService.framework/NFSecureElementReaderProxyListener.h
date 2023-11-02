
@interface NFSecureElementReaderProxyListener : NSObject <STSRemoteTransceiverProtocol> {
    NFHardwareSecureElementInfo * _seInfo;
    NFSecureElementManagerSession * _seSession;
}

@property (nonatomic, retain) NFHardwareSecureElementInfo *seInfo;
@property (nonatomic, retain) NFSecureElementManagerSession *seSession;

- (void).cxx_destruct;
- (id)initWithSTSReaderSession:(id)arg1;
- (id)seInfo;
- (id)seSession;
- (void)setSeInfo:(id)arg1;
- (void)setSeSession:(id)arg1;
- (id)transceiveWithData:(id)arg1 outError:(id*)arg2;

@end
