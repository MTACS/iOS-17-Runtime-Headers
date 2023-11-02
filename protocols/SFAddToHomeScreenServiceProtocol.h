
@protocol SFAddToHomeScreenServiceProtocol <NSObject>

@required

- (void)didFetchManifestData:(NSDictionary *)arg1;
- (void)didFetchWebClipMetadata:(NSDictionary *)arg1;
- (void)loadURL:(NSURL *)arg1;
- (void)prepareForDisplayWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
