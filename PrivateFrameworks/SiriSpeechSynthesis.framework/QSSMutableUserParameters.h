
@interface QSSMutableUserParameters : QSSUserParameters

@property (nonatomic, copy) NSString *fork_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fork_id;
- (id)init;
- (void)setFork_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
