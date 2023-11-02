
@protocol NMSDownloadableContentProvider

@required

- (<NMSDownloadableItemEnumerator> *)createItemEnumerator;
- (<NMSDownloadableContentProviderDelegate> *)delegate;
- (void)setDelegate:(id <NMSDownloadableContentProviderDelegate>)arg1;

@end
