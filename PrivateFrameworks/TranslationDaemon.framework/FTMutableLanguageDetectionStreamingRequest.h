
@interface FTMutableLanguageDetectionStreamingRequest : FTLanguageDetectionStreamingRequest

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTAudioPacket *contentAsFTAudioPacket;
@property (nonatomic, copy) FTFinishAudio *contentAsFTFinishAudio;
@property (nonatomic, copy) FTStartLanguageDetectionRequest *contentAsFTStartLanguageDetectionRequest;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTAudioPacket;
- (id)contentAsFTFinishAudio;
- (id)contentAsFTStartLanguageDetectionRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTAudioPacket:(id)arg1;
- (void)setContentAsFTFinishAudio:(id)arg1;
- (void)setContentAsFTStartLanguageDetectionRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
