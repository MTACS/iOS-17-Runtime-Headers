
@protocol ACAlertXPCClient

@required

- (void)dismissAlertWithActivityIdentifier:(NSString *)arg1;
- (oneway void)presentAlertWithActivityIdentifier:(void *)arg1 payload:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
