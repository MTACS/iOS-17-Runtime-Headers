
@protocol CNUICoreContactStoreFacade <NSObject>

@required

- (CNContact *)_crossPlatformUnifiedMeContactWithKeysToFetch:(NSArray *)arg1 error:(id*)arg2;
- (bool)enumerateContactsWithFetchRequest:(void *)arg1 error:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: CNContactFetchRequest *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CNContact *, bool*, void*
- (bool)executeSaveRequest:(CNSaveRequest *)arg1 error:(id*)arg2;

@end
