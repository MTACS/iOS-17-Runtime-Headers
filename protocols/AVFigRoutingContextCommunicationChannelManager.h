
@protocol AVFigRoutingContextCommunicationChannelManager <NSObject>

@required

- (AVOutputContextCommunicationChannel *)openCommunicationChannelWithOptions:(NSDictionary *)arg1 error:(id*)arg2;
- (AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
- (AVFigRoutingContextOutputContextImpl *)parentOutputContextImpl;
- (void)setParentOutputContextImpl:(AVFigRoutingContextOutputContextImpl *)arg1;

@end
