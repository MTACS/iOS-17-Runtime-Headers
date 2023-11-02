
@interface SGDeliveryDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_createEnrichmentsForDetections:(id)arg1 entity:(id)arg2 foundInString:(id)arg3;
- (void)_logDeliverySenderForSenderDomain:(id)arg1;
- (void)_logUniqueEnrichments:(id)arg1;
- (id)createEnrichmentWithMatch:(id)arg1 onParentEntity:(id)arg2 foundInString:(id)arg3;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;

@end
