
@protocol UASharedPasteboardManagerResponseProtocol <NSObject>

@required

- (void)tellClientDebuggingEnabled:(bool)arg1 logFileHandle:(NSFileHandle *)arg2;
- (void)writeLocalPasteboardToFile:(void *)arg1 itemDir:(void *)arg2 extension:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSFileHandle *, NSURL *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UASharedPasteboardInfo *, NSError *, void*
- (void)writeLocalPasteboardToFile:(void *)arg1 itemDir:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSFileHandle *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UASharedPasteboardInfo *, NSError *, void*

@end
