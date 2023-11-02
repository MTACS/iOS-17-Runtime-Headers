
@protocol ASTDownloadConnection <ASTConnection>

@required

- (NSFileHandle *)destinationFileHandle;
- (id /* block */)didDownloadFile:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSURL *, NSError *, void*, id, SEL
- (void)setDidDownloadFile:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*

@end
