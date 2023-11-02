
@interface LPAppleMusicLyricExcerptFetcher : LPFetcher {
    id /* block */  _completionHandler;
    MPStoreLyricsSnippetURLComponents * _lyricComponents;
    NSOperation * _operation;
}

@property (nonatomic, retain) MPStoreLyricsSnippetURLComponents *lyricComponents;

- (void).cxx_destruct;
- (void)cancel;
- (void)completedWithLyrics:(id)arg1;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)lyricComponents;
- (void)setLyricComponents:(id)arg1;

@end
