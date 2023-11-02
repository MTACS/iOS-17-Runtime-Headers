
@protocol UAPasteboardFileItemProviding <UAPasteboardItemProviding>

@required

- (void)getDataFileWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (NSString *)getFileName;
- (bool)preferFileRep;
- (void)setPreferFileRep:(bool)arg1;

@end
