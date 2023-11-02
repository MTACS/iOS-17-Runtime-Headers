
@interface SGWalletOrderAttachmentDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_dissectMessage:(id)arg1 entity:(id)arg2;
- (id)_downloadWalletOrderAttachmentsFrom:(id)arg1;
- (id)_enrichmentsForWalletOrderDictionary:(id)arg1 orderData:(id)arg2 parentMessage:(id)arg3 parentEntity:(id)arg4;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (bool)orderAttachmentsCompletelyDownloaded:(id)arg1;
- (bool)shouldIgnoreEntity:(id)arg1;

@end
