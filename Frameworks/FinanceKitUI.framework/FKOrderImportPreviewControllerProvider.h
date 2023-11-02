
@interface FKOrderImportPreviewControllerProvider : NSObject

+ (bool)canProvidePreviewControllerForMessages;
+ (id)makeViewControllerWithOrderData:(id)arg1 completion:(id /* block */)arg2 error:(id*)arg3;
+ (id)makeViewControllerWithOrderURL:(id)arg1 completion:(id /* block */)arg2 error:(id*)arg3;

@end
