
@interface FTMutableTextToSpeechRouterStreamingStreamingRequest : FTTextToSpeechRouterStreamingStreamingRequest

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTStartTextToSpeechStreamingRequest *contentAsFTStartTextToSpeechStreamingRequest;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTStartTextToSpeechStreamingRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTStartTextToSpeechStreamingRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
