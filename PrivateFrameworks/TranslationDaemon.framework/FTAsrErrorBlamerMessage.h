
@interface FTAsrErrorBlamerMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct AsrErrorBlamerMessage { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, readonly) FTErrorBlamerRequest *session_messageAsFTErrorBlamerRequest;
@property (nonatomic, readonly) FTErrorBlamerResponse *session_messageAsFTErrorBlamerResponse;
@property (nonatomic, readonly) long long session_message_type;

+ (Class)session_message_immutableClassForType:(long long)arg1;
+ (long long)session_message_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::AsrErrorBlamerMessage> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrErrorBlamerMessage { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrErrorBlamerMessage { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_message;
- (id)session_messageAsFTErrorBlamerRequest;
- (id)session_messageAsFTErrorBlamerResponse;
- (long long)session_message_type;

@end
