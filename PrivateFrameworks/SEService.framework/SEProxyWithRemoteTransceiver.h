
@interface SEProxyWithRemoteTransceiver : NSObject <SEProxyInterface> {
    STSRemoteTransceiverProxy * _remoteTransceiver;
}

- (void).cxx_destruct;
- (void)setRemoteTransceiver:(id)arg1;
- (oneway void)transceive:(id)arg1 callback:(id /* block */)arg2;

@end
