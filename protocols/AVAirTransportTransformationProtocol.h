
@protocol AVAirTransportTransformationProtocol <NSObject>

@required

- (NSData *)dataForMessage:(id <AVMessageTransformerProtocol>)arg1;
- (AVAirMessageParts<AVAirTransportReverseTransformationResultProtocol> *)reverseTransformerForMessageData:(NSData *)arg1;

@end
