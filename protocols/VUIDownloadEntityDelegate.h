
@protocol VUIDownloadEntityDelegate <NSObject>

@optional

- (void)downloadEntity:(VUIDownloadEntity *)arg1 numberOfItemsDidChange:(unsigned long long)arg2;
- (void)downloadEntity:(VUIDownloadEntity *)arg1 numberOfItemsDownloadingDidChange:(NSNumber *)arg2;

@end
