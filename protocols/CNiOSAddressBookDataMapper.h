
@protocol CNiOSAddressBookDataMapper <CNDataMapper>

@required

- (<CNEncodedFetchCursor> *)encodedContactsCursorForFetchRequest:(void *)arg1 cursorCleanupBlock:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 7: CNContactFetchRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id*
- (bool)fetchContactsForFetchRequest:(void *)arg1 error:(void *)arg2 batchHandler:(void *)arg3; // needs 3 arg types, found 9: CNContactFetchRequest *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, void*
- (bool)fetchEncodedContactsForFetchRequest:(void *)arg1 error:(void *)arg2 cancelationToken:(void *)arg3 batchHandler:(void *)arg4; // needs 4 arg types, found 10: CNContactFetchRequest *, id*, CNCancelationToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CNEncodedFetchResponse> *, bool, void*
- (id)initWithConfiguration:(CNDataMapperConfiguration *)arg1 addressBook:(CNiOSAddressBook *)arg2;

@end
