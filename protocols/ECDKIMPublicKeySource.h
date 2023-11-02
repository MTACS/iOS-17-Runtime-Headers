
@protocol ECDKIMPublicKeySource <NSObject>

@required

- (void)getPublicKeyRecordsFromDomain:(void *)arg1 withSelector:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
