
@protocol FCBundleChannelProviderType

@required

- (NSArray *)bundleChannelIDs;
- (NSString *)bundleChannelIDsVersion;
- (<FCBundleChannelProviderDelegate> *)delegate;
- (void)loadInitialBundleChannelIDsWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <FCBundleChannelProviderDelegate>)arg1;

@end
