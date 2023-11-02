
@protocol UMUserPersonaManagement

@required

- (void)createUserPersona:(void *)arg1 passcodeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)createUserPersona:(void *)arg1 passcodeData:(void *)arg2 passcodeDataType:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSDictionary *, NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (UMUserPersona *)currentPersona;
- (void)deleteUserPersonaWithIDString:(void *)arg1 passcodeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteUserPersonaWithPersonaUniqueString:(void *)arg1 passcodeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteUserPersonaWithProfileInfo:(void *)arg1 passcodeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteUserPersonaWithType:(void *)arg1 passcodeData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: int, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disableUserPersonaWithProfileInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchAllPersonasForAllUsersWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchAllPersonasWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchAsidMapOfAllUsersWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchBundleIdentifierForPersonaWithIDString:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchBundleIdentifierForType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchPersonaWithIDString:(void *)arg1 CompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchPersonaWithPersonaUniqueString:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchPersonaWithType:(void *)arg1 CompletionHandler:(void *)arg2; // needs 2 arg types, found 8: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (bool)haveValidPersonaContextForIDString:(NSString *)arg1;
- (bool)haveValidPersonaContextForPersonaUniqueString:(NSString *)arg1;
- (void)registerPersonaListUpdateObserver:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <UMUserPersonaUpdateObserver> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)registerPersonaListUpdateObserver:(void *)arg1 withMachService:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: <UMUserPersonaUpdateObserver> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBundlesIdentifiers:(void *)arg1 forPersonaWithPersonaUniqueString:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBundlesIdentifiers:(void *)arg1 forUniquePersonaType:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBundlesIdentifiers:(void *)arg1 forUniquePersonaWithIDString:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setMultiPersonaBundleIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
