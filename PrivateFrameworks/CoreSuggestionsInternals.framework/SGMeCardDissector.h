
@interface SGMeCardDissector : SGPipelineDissector <SGTextMessageProcessing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;

@end
