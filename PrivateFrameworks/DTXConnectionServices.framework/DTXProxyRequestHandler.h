
@interface DTXProxyRequestHandler : NSObject {
    id /* block */  _handlerBlock;
    Protocol * _peerProtocol;
    NSString * _peerProtocolName;
    Protocol * _publishedProtocol;
    NSString * _publishedProtocolName;
}

@property (readonly, copy) NSString *channelIdentifier;
@property (readonly, copy) id /* block */ handlerBlock;
@property (readonly) Protocol *peerProtocol;
@property (readonly, copy) NSString *peerProtocolName;
@property (readonly) Protocol *publishedProtocol;
@property (readonly, copy) NSString *publishedProtocolName;

- (void).cxx_destruct;
- (id)channelIdentifier;
- (id /* block */)handlerBlock;
- (id)initWithPublishedProtocol:(id)arg1 publishedProtocolName:(id)arg2 peerProtocol:(id)arg3 peerProtocolName:(id)arg4 handlerBlock:(id /* block */)arg5;
- (bool)matchesPublishedProtocolName:(id)arg1 peerProtocolName:(id)arg2;
- (id)peerProtocol;
- (id)peerProtocolName;
- (id)publishedProtocol;
- (id)publishedProtocolName;

@end
