
@protocol LKLoginControllerProtocol

@required

- (void)chooseUserWithIdentifier:(void *)arg1 inClassWithID:(void *)arg2 password:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)loginAppleID:(void *)arg1 password:(void *)arg2 localLoginOnly:(void *)arg3 isTemporarySession:(void *)arg4 withCompletionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveClassConfiguration:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: LKClassConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
