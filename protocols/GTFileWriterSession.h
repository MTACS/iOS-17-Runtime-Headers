
@protocol GTFileWriterSession <NSObject>

@required

+ (<GTFileWriterSession> *)sessionWithFileEntries:(NSArray *)arg1 relativeToURL:(NSURL *)arg2 options:(GTFileTransferOptions *)arg3 error:(id*)arg4;

- (bool)finish:(id*)arg1;
- (id)init;
- (id)initWithFileEntries:(NSArray *)arg1 relativeToURL:(NSURL *)arg2 options:(GTFileTransferOptions *)arg3 error:(id*)arg4;
- (void)writeFileData:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
