
@protocol BMFileServer <BMAccessServiceBase>

@required

- (void)createDirectoryAtPath:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fileHandleForFileAtPath:(void *)arg1 flags:(void *)arg2 protection:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, int, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BMFileHandle *, NSError *, void*
- (void)removeDirectoryAtPath:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeFileAtPath:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)replaceFileAtPath:(void *)arg1 withFileHandle:(void *)arg2 protection:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, BMFileHandle *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BMFileHandle *, NSError *, void*
- (void)temporaryFileHandleWithProtection:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BMFileHandle *, NSError *, void*

@end
