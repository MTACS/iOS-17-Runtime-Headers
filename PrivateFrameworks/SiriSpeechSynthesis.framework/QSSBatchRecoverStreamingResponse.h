
@interface QSSBatchRecoverStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BatchRecoverStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSBatchRecoverFinalResponse *contentAsQSSBatchRecoverFinalResponse;
@property (nonatomic, readonly) QSSPronGuessResponse *contentAsQSSPronGuessResponse;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::BatchRecoverStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)contentAsQSSBatchRecoverFinalResponse;
- (id)contentAsQSSPronGuessResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
