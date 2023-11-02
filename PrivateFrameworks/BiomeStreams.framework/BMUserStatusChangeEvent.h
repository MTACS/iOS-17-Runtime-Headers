
@interface BMUserStatusChangeEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _idsHandle;
    NSArray * _idsHandles;
    NSString * _statusChangeType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idsHandle;
@property (nonatomic, copy) NSArray *idsHandles;
@property (nonatomic, copy) NSString *statusChangeType;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)idsHandle;
- (id)idsHandles;
- (id)initWithIDSHandle:(id)arg1 statusChangeType:(id)arg2;
- (id)initWithIDSHandles:(id)arg1 statusChangeType:(id)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;
- (void)setIdsHandle:(id)arg1;
- (void)setIdsHandles:(id)arg1;
- (void)setStatusChangeType:(id)arg1;
- (id)statusChangeType;

@end
