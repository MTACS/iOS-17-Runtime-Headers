
@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject

@property (nonatomic) bool mask;
@property (nonatomic) double opcode;
@property (nonatomic, copy) NSString *payloadData;
@property (nonatomic) double payloadLength;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithOpcode:(double)arg1 mask:(bool)arg2 payloadData:(id)arg3 payloadLength:(double)arg4;
- (bool)mask;
- (double)opcode;
- (id)payloadData;
- (double)payloadLength;
- (void)setMask:(bool)arg1;
- (void)setOpcode:(double)arg1;
- (void)setPayloadData:(id)arg1;
- (void)setPayloadLength:(double)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithOpcode:(double)arg1 mask:(bool)arg2 payloadData:(id)arg3 payloadLength:(double)arg4;

@end
