
@interface FTMutablePronGuessStreamingRequest : FTPronGuessStreamingRequest

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTAudioPacket *contentAsFTAudioPacket;
@property (nonatomic, copy) FTCancelRequest *contentAsFTCancelRequest;
@property (nonatomic, copy) FTFinishAudio *contentAsFTFinishAudio;
@property (nonatomic, copy) FTStartPronGuessRequest *contentAsFTStartPronGuessRequest;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTAudioPacket;
- (id)contentAsFTCancelRequest;
- (id)contentAsFTFinishAudio;
- (id)contentAsFTStartPronGuessRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTAudioPacket:(id)arg1;
- (void)setContentAsFTCancelRequest:(id)arg1;
- (void)setContentAsFTFinishAudio:(id)arg1;
- (void)setContentAsFTStartPronGuessRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
