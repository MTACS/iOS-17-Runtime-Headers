
@interface LPFetcherLyricsResponse : LPFetcherResponse {
    LPLyricExcerptMetadata * _lyrics;
}

@property (nonatomic, readonly, retain) LPLyricExcerptMetadata *lyrics;

- (void).cxx_destruct;
- (id)initWithLyrics:(id)arg1 fetcher:(id)arg2;
- (id)lyrics;

@end
