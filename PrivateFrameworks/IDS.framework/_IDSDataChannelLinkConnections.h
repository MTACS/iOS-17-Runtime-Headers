
@interface _IDSDataChannelLinkConnections : NSObject {
    _IDSDataChannelLinkConnection * _qpod;
    _IDSDataChannelLinkConnection * _udp;
}

@property (retain) _IDSDataChannelLinkConnection *qpod;
@property (retain) _IDSDataChannelLinkConnection *udp;

- (void).cxx_destruct;
- (id)description;
- (bool)isQUICPod;
- (id)qpod;
- (void)setQpod:(id)arg1;
- (void)setUdp:(id)arg1;
- (id)udp;

@end
