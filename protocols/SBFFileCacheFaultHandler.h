
@protocol SBFFileCacheFaultHandler <NSObject>

@required

- (void)fileCache:(void *)arg1 loadFileForIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: SBFFileCache *, <SBFFileCacheFileIdentifier> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileWrapper *, NSError *, void*

@end
