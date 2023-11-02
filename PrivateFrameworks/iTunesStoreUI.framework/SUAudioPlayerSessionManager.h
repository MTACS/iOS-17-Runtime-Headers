
@interface SUAudioPlayerSessionManager : NSObject {
    NSMutableDictionary * _sessions;
}

@property (nonatomic, readonly) NSArray *allSessionURLs;

+ (id)sessionManager;

- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (id)allSessionURLs;
- (id)audioPlayerForURL:(id)arg1;
- (void)dealloc;
- (id)endSessionForURL:(id)arg1;
- (id)init;
- (id)startSessionWithURL:(id)arg1;
- (id)stopAllAudioPlayerSessions;

@end
