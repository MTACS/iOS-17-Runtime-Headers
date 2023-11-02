
@interface BMEntityRelationshipEvent : NSObject <BMProtoBufWrapper, BMStoreData> {
    NSDictionary * _attributes;
    NSString * _clientId;
    NSString * _relationship;
    BMEntity * _sourceEntity;
    BMEntity * _targetEntity;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *clientId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *relationship;
@property (nonatomic, readonly) BMEntity *sourceEntity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMEntity *targetEntity;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)attributes;
- (id)clientId;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)entityFromPBEntity:(id)arg1;
- (id)initWithClientId:(id)arg1 relationship:(id)arg2 sourceEntity:(id)arg3 targetEntity:(id)arg4 attributes:(id)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)relationship;
- (id)serialize;
- (id)sourceEntity;
- (id)targetEntity;

@end
