
@interface QSSMutableRecognitionToken : QSSRecognitionToken

@property (nonatomic) bool add_space_after;
@property (nonatomic) int confidence;
@property (nonatomic) int end_milli_seconds;
@property (nonatomic, copy) NSString *ipa_phone_seq;
@property (nonatomic, copy) NSString *phone_seq;
@property (nonatomic) int silence_start_milli_seconds;
@property (nonatomic) int start_milli_seconds;
@property (nonatomic, copy) NSString *token_text;

- (bool)add_space_after;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)end_milli_seconds;
- (id)init;
- (id)ipa_phone_seq;
- (id)phone_seq;
- (void)setAdd_space_after:(bool)arg1;
- (void)setConfidence:(int)arg1;
- (void)setEnd_milli_seconds:(int)arg1;
- (void)setIpa_phone_seq:(id)arg1;
- (void)setPhone_seq:(id)arg1;
- (void)setSilence_start_milli_seconds:(int)arg1;
- (void)setStart_milli_seconds:(int)arg1;
- (void)setToken_text:(id)arg1;
- (int)silence_start_milli_seconds;
- (int)start_milli_seconds;
- (id)token_text;

@end
