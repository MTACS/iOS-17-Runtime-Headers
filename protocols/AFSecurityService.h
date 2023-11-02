
@protocol AFSecurityService <NSObject>

@required

- (oneway void)internalAuthAppleConnectServiceTicket:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (oneway void)internalAuthSessionToken:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (oneway void)processData:(void *)arg1 usingProcedure:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (oneway void)processDataMap:(void *)arg1 usingProcedure:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, void*
- (oneway void)setInternalAuthAppleConnectServiceTicket:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setInternalAuthSessionToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setKeychainValue:(void *)arg1 forKey:(void *)arg2 accountIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSData *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
