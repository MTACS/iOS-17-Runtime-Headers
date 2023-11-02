
@interface BMSiriMemoryReferenceResolutionEvent : NSObject <BMProtoBufWrapper, BMStoreData> {
    NSDictionary * _entitiesByEntityID;
    NSString * _version;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *entitiesByEntityID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *version;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)entitiesByEntityID;
- (unsigned long long)hash;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithVersion:(id)arg1 entityDict:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;
- (id)version;

@end
