
@interface SGMetricsDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    SGSqlEntityStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldSampleMessage;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (id)initWithEntityStore:(id)arg1;

@end
