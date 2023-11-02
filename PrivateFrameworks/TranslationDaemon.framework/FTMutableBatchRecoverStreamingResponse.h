
@interface FTMutableBatchRecoverStreamingResponse : FTBatchRecoverStreamingResponse

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTBatchRecoverFinalResponse *contentAsFTBatchRecoverFinalResponse;
@property (nonatomic, copy) FTPronGuessResponse *contentAsFTPronGuessResponse;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTBatchRecoverFinalResponse;
- (id)contentAsFTPronGuessResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTBatchRecoverFinalResponse:(id)arg1;
- (void)setContentAsFTPronGuessResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
