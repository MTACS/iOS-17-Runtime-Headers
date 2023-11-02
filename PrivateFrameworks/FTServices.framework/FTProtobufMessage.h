
@interface FTProtobufMessage : FTIDSMessage {
    NSString * _messageID;
    NSData * _protoData;
    NSData * _protoResponse;
    NSString * _pushTopic;
    int  _responseValue;
    int  _version;
}

@property (nonatomic, retain) NSString *messageID;
@property (nonatomic, retain) NSData *protoData;
@property (nonatomic, retain) NSData *protoResponse;
@property (nonatomic, retain) NSString *pushTopic;
@property (nonatomic) int responseValue;
@property (nonatomic) int version;

- (void).cxx_destruct;
- (id)additionalMessageHeadersForOutgoingPush;
- (long long)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
- (bool)highPriority;
- (id)initWithPushTopic:(id)arg1 protoData:(id)arg2;
- (bool)isIDSMessage;
- (bool)isWebTunnelMessage;
- (id)messageBody;
- (id)messageID;
- (id)protoData;
- (id)protoResponse;
- (id)pushTopic;
- (long long)responseCommand;
- (int)responseValue;
- (void)setMessageID:(id)arg1;
- (void)setProtoData:(id)arg1;
- (void)setProtoResponse:(id)arg1;
- (void)setPushTopic:(id)arg1;
- (void)setResponseValue:(int)arg1;
- (void)setVersion:(int)arg1;
- (id)topic;
- (id)userAgentHeaderString;
- (int)version;
- (bool)wantsAPSRetries;
- (bool)wantsBinaryPush;
- (bool)wantsCompressedBody;
- (bool)wantsIDSProtocolVersion;
- (bool)wantsIntegerUniqueIDs;
- (bool)wantsResponse;
- (bool)wantsUserAgentInHeaders;

@end
