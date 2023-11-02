
@interface QSSMutableTextToSpeechResponseDevData : QSSTextToSpeechResponseDevData

@property (nonatomic) bool has_click;
@property (nonatomic, copy) NSString *log;
@property (nonatomic, copy) QSSQSSVersionInfo *server_info;
@property (nonatomic, copy) NSString *worker_process_type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)has_click;
- (id)init;
- (id)log;
- (id)server_info;
- (void)setHas_click:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setServer_info:(id)arg1;
- (void)setWorker_process_type:(id)arg1;
- (id)worker_process_type;

@end
