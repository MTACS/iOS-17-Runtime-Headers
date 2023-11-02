
@interface LPAssociatedApplicationMetadataFetcher : LPFetcher {
    NSURL * _URL;
    NSString * _bundleIdentifier;
    id /* block */  _completionHandler;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)URL;
- (void)_completedWithClipMetadata:(id)arg1 iconURL:(id)arg2 error:(id)arg3;
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (id)bundleIdentifier;
- (void)cancel;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setURL:(id)arg1;

@end
