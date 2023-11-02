
@interface BMReadMessageEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _idsHandle;
    bool  _markedUnread;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idsHandle;
@property (nonatomic, readonly) bool markedUnread;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)idsHandle;
- (id)initMarkUnreadWithIDSHandle:(id)arg1;
- (id)initWithIDSHandle:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)markedUnread;
- (id)proto;
- (id)serialize;
- (void)setIdsHandle:(id)arg1;

@end
