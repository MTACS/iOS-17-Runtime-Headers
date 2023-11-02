
@interface SGMailIntelligenceDissector : SGPipelineDissector <SGMailMessageProcessing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (float)computeContactConnectionScoreFromEmailAddress:(id)arg1 usingEntityStore:(id)arg2;
+ (id)getContactIdentifierForEmail:(id)arg1 usingEntityStore:(id)arg2;

- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;

@end
