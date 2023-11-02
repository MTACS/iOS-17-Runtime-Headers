
@interface FTMutableLmScorerRequest : FTLmScorerRequest

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *task_name;
@property (nonatomic, copy) NSString *transcript;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language;
- (void)setLanguage:(id)arg1;
- (void)setTask_name:(id)arg1;
- (void)setTranscript:(id)arg1;
- (id)task_name;
- (id)transcript;

@end
