
@interface MPNowPlayingInfoLyricsEvent : NSObject {
    void * _mediaRemoteLyricsEvent;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) void*mediaRemoteLyricsEvent;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) MPNowPlayingInfoLyricsItemToken *token;

- (void)dealloc;
- (id)endDate;
- (id)initWithMediaRemoteLyricsEvent:(void*)arg1;
- (void*)mediaRemoteLyricsEvent;
- (id)startDate;
- (id)token;

@end
