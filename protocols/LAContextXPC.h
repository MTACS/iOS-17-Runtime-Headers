
@protocol LAContextXPC <LAContextExternalizationProt, LAContextPropertiesProt, LAContextClientEvaluationProt, LAContextEventFeedbackProt>

@required

- (void)allowTransferToProcess:(void *)arg1 receiverAuditTokenData:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: int, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)tokenForTransferToUnknownProcess:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
