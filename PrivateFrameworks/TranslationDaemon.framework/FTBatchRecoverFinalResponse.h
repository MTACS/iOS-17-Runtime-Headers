
@interface FTBatchRecoverFinalResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BatchRecoverFinalResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) int num_of_processed;
@property (nonatomic, readonly) int num_of_requested;
@property (nonatomic, readonly) int num_of_succeeded;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BatchRecoverFinalResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverFinalResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverFinalResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (int)num_of_processed;
- (int)num_of_requested;
- (int)num_of_succeeded;
- (id)session_id;
- (id)speech_id;

@end
