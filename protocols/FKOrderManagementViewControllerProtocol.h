
@protocol FKOrderManagementViewControllerProtocol <NSObject>

@required

- (void)addOrderAtURL:(NSURL *)arg1;
- (void)showDetailsForOrder:(NSURL *)arg1;
- (void)showDetailsForOrderTypeIdentifier:(NSString *)arg1 orderIdentifier:(NSString *)arg2 fulfillmentIdentifier:(NSString *)arg3;
- (void)showDetailsForOrderTypeIdentifier:(NSString *)arg1 orderIdentifier:(NSString *)arg2 fulfillmentIdentifier:(NSString *)arg3 sourceApplication:(NSString *)arg4;
- (void)showOrderDashboard;

@end
