
@interface IMStickerMessagePipelineParameter : IMAssociatedMessagePipelineParameter <IMStickerMessageProcessingParameter>

- (id)description;
- (id)initWithBD:(id)arg1 idsTrustedData:(id)arg2;
- (bool)supportsStickerAttributesInMessageBody;

@end
