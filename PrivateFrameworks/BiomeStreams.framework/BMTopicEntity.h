
@interface BMTopicEntity : NSObject <BMProtoBufWrapper> {
    NSDictionary * _attributes;
    NSString * _displayName;
    NSString * _topicId;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *topicId;

- (void).cxx_destruct;
- (id)attributes;
- (id)displayName;
- (id)encodeAsProto;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithTopicId:(id)arg1 displayName:(id)arg2 attributes:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)topicId;

@end
