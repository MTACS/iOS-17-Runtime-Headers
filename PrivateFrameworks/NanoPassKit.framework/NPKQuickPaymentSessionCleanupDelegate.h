
@interface NPKQuickPaymentSessionCleanupDelegate : NSObject <NPKQuickPaymentSessionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_saveTransactionFromContext:(id)arg1;
- (void)paymentSession:(id)arg1 didCompleteTransactionForReason:(unsigned long long)arg2 withTransactionContext:(id)arg3 shouldCleanupSession:(bool)arg4;

@end
