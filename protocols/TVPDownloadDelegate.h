
@protocol TVPDownloadDelegate <NSObject>

@optional

- (void)download:(TVPDownload *)arg1 didChangeStateTo:(long long)arg2;
- (void)download:(TVPDownload *)arg1 didDetermineMaximumResolution:(long long)arg2 maximumVideoRange:(long long)arg3;
- (void)download:(TVPDownload *)arg1 didReceiveTaskIdentifier:(NSNumber *)arg2;
- (void)download:(void *)arg1 processFinishedDownloadWithCompletion:(void *)arg2; // needs 2 arg types, found 7: TVPDownload *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)download:(TVPDownload *)arg1 progressDidChange:(double)arg2;
- (void)download:(TVPDownload *)arg1 willDownloadToURL:(NSURL *)arg2;

@end
