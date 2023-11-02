
@interface FinanceKit.PendingApplePayOrderImporter : NSObject {
    void store;
}

+ (id)makeImporterAndReturnError:(id*)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)insertOrUpdatePendingApplePayOrderWithOrderDetails:(id)arg1;

@end
