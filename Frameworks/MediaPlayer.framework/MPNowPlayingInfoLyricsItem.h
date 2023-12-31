
@interface MPNowPlayingInfoLyricsItem : NSObject {
    void * _mediaRemoteLyricsItem;
}

@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) void*mediaRemoteLyricsItem;
@property (nonatomic, readonly) MPNowPlayingInfoLyricsItemToken *token;
@property (nonatomic, readonly) bool userProvided;

- (void)dealloc;
- (id)initWithLyrics:(id)arg1 userProvided:(bool)arg2;
- (id)initWithLyrics:(id)arg1 userProvided:(bool)arg2 token:(id)arg3;
- (id)initWithMediaRemoteLyricsItem:(void*)arg1;
- (id)lyrics;
- (void*)mediaRemoteLyricsItem;
- (id)token;
- (bool)userProvided;

@end
