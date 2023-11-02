
@protocol SUUINavigationDocumentDelegate <NSObject>

@optional

- (IKJSNavigationDocument *)jsNavigationDocumentForNavigationDocumentController:(SUUINavigationDocumentController *)arg1 inContext:(JSContext *)arg2;
- (void)navigationDocumentController:(void *)arg1 requestsAccessToAppContextUsingBlock:(void *)arg2; // needs 2 arg types, found 7: SUUINavigationDocumentController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IKAppContext *, void*
- (void)navigationDocumentStackDidChange:(SUUINavigationDocumentController *)arg1;

@end
