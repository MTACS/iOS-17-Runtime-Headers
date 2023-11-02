
@protocol FinanceKit.OrderTrackingXPCProtocol

@required

- (void)activeOrdersWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, XPCOrders *, NSError *, void*
- (void)containsOrderWithOrderTypeIdentifier:(void *)arg1 orderIdentifier:(void *)arg2 updatedDate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)containsOrderWithOrderTypeIdentifier:(void *)arg1 orderIdentifier:(void *)arg2 updatedDate:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)deleteOrderWithOrderTypeIdentifier:(void *)arg1 orderIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)insertOrUpdateOrderSyncWithData:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, _TtC10FinanceKit29XPCOrderInsertOrUpdateOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC10FinanceKit28XPCOrderInsertOrUpdateResult *, NSError *, void*
- (void)isDataAvailableFor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)ordersWithFetchType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: XPCFetchOrderType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, XPCOrders *, NSError *, void*
- (void)refreshOrderWithOrderTypeIdentifier:(void *)arg1 orderIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveOrderWithSignedArchive:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)setOrderMarkedAsCompleteWithOrderTypeIdentifier:(void *)arg1 orderIdentifier:(void *)arg2 newValue:(void *)arg3 modificationDate:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, bool, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setOrderNotificationsEnabled:(void *)arg1 orderTypeIdentifier:(void *)arg2 orderIdentifier:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: bool, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateOrdersShowAsActiveWithNow:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
