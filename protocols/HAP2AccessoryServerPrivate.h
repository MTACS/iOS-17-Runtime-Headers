
@protocol HAP2AccessoryServerPrivate <HAP2AccessoryServer>

@required

- (<HAP2AccessoryServerBrowserPrivate> *)browser;
- (<HAP2AccessoryServerControllerPrivate> *)controller;
- (HAP2SerializedOperationQueue *)operationQueue;
- (NSString *)productData;
- (void)setProductData:(NSString *)arg1;

@end
