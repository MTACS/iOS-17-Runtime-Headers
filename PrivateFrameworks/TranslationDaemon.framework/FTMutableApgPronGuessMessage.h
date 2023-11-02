
@interface FTMutableApgPronGuessMessage : FTApgPronGuessMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTAudioPacket *session_messageAsFTAudioPacket;
@property (nonatomic, copy) FTCancelRequest *session_messageAsFTCancelRequest;
@property (nonatomic, copy) FTFinishAudio *session_messageAsFTFinishAudio;
@property (nonatomic, copy) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (nonatomic, copy) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTAudioPacket;
- (id)session_messageAsFTCancelRequest;
- (id)session_messageAsFTFinishAudio;
- (id)session_messageAsFTPronGuessResponse;
- (id)session_messageAsFTStartPronGuessRequest;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTAudioPacket:(id)arg1;
- (void)setSession_messageAsFTCancelRequest:(id)arg1;
- (void)setSession_messageAsFTFinishAudio:(id)arg1;
- (void)setSession_messageAsFTPronGuessResponse:(id)arg1;
- (void)setSession_messageAsFTStartPronGuessRequest:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
