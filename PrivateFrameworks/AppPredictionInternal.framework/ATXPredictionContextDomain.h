
@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>

- (id)encodeAsProto;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)jsonDict;
- (id)proto;

@end
