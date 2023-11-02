
@interface SGWalletPassAttachmentDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canAddPass:(id)arg1;
+ (bool)isPassAvailable:(id)arg1;

- (void)_dissectMessage:(id)arg1 entity:(id)arg2;
- (id)_enrichmentsForWalletPassDictionary:(id)arg1 filePath:(id)arg2 parentMessage:(id)arg3 parentEntity:(id)arg4;
- (id)_extractPassInformation:(id)arg1 filePath:(id)arg2 state:(int)arg3;
- (id)_extractRelevantSemanticTagsFromPass:(id)arg1;
- (id)_filteredWalletPassAttachmentsFrom:(id)arg1;
- (id)_passDataForFilePath:(id)arg1;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;

@end
