
@protocol SHShazamKitService <SHPreparableMatcher, SHMatcherDelegate, SHRemoteMediaLibrary, SHMediaItemProvider, SHEventSignalling>

@optional

- (void)startRecognitionForRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: SHMatcherRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)synchronizeSnapshot:(void *)arg1 startCondition:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: SHMediaLibrarySnapshot *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
