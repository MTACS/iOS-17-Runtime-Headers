
@interface BMEntity : NSObject <BMProtoBufWrapper> {
    bool  _isPersonType;
    bool  _isTopicType;
    BMPersonEntity * _personEntity;
    BMTopicEntity * _topicEntity;
}

@property (nonatomic, readonly) bool isPersonType;
@property (nonatomic, readonly) bool isTopicType;
@property (nonatomic, readonly) BMPersonEntity *personEntity;
@property (nonatomic, readonly) BMTopicEntity *topicEntity;

- (void).cxx_destruct;
- (id)encodeAsProto;
- (id)initWithIsPersonType:(bool)arg1 isTopicType:(bool)arg2 topicEntity:(id)arg3 personEntity:(id)arg4;
- (id)initWithPersonEntity:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithTopicEntity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPersonType;
- (bool)isTopicType;
- (id)personEntity;
- (id)proto;
- (id)topicEntity;

@end
