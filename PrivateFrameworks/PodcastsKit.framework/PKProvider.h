
@interface PKProvider : NSObject

+ (void)createCatalogWithCompletion:(id /* block */)arg1;
+ (void)createLibraryWithCompletion:(id /* block */)arg1;
+ (void)createPlayerControllerWithCompletion:(id /* block */)arg1;

- (id)init;

@end
