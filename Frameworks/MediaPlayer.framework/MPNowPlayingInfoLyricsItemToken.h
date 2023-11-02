
@interface MPNowPlayingInfoLyricsItemToken : NSObject {
    void * _mediaRemoteLyricsItemToken;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void*mediaRemoteLyricsItemToken;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)initWithMediaRemoteLyricsItemToken:(void*)arg1;
- (void*)mediaRemoteLyricsItemToken;
- (id)userInfo;

@end
