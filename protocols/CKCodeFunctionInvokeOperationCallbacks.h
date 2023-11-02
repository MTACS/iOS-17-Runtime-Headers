
@protocol CKCodeFunctionInvokeOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleInitialResponseReceived:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)handleReplaceLocalWithWireSerializations:(void *)arg1 encryptedMasterKeys:(void *)arg2 wireEnvelopes:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)handleReplaceWireSerializationsWithRecords:(NSArray *)arg1;

@end
