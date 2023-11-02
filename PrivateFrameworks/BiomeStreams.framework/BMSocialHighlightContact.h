
@interface BMSocialHighlightContact : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _handle;
    bool  _isMe;
    bool  _isSignificant;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMe;
@property (nonatomic, readonly) bool isSignificant;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)handle;
- (id)initWithHandle:(id)arg1 isSignificant:(bool)arg2 isMe:(bool)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isMe;
- (bool)isSignificant;
- (id)proto;
- (id)serialize;

@end
