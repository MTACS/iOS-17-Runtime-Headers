
@interface BMScreenSharingEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    bool  _isStart;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStart;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)init;
- (id)initWithIsStart:(bool)arg1;
- (id)initWithIsStart:(bool)arg1 type:(unsigned long long)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (id)proto;
- (id)serialize;
- (unsigned long long)type;

@end
