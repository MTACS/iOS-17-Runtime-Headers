
@protocol SYNotesActivationCommandImpl <NSObject>

@required

+ (void)activateWithDomainIdentifier:(void *)arg1 noteIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
+ (void)activateWithMetaActivity:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUserActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
