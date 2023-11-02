
@interface _MPCPlaybackEngineSessionManager : NSObject <MPCPlaybackEngineEventObserving> {
    MPCPlaybackEngine * _playbackEngine;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableArray * _sessionArchives;
    NSMutableDictionary * _sessionIdentifierArchiveMap;
    bool  _stateRestorationSupported;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) NSMutableArray *sessionArchives;
@property (nonatomic, readonly) NSMutableDictionary *sessionIdentifierArchiveMap;
@property (nonatomic, retain) NSString *stateRestorationSessionIdentifier;
@property (getter=isStateRestorationSupported, nonatomic) bool stateRestorationSupported;
@property (readonly) Class superclass;

+ (id)archivesAtURL:(id)arg1;

- (void).cxx_destruct;
- (id)_playbackSessionsDirectory;
- (void)deleteSessionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithPlaybackEngine:(id)arg1;
- (bool)isStateRestorationSupported;
- (id)playbackEngine;
- (void)saveSessionWithCompletion:(id /* block */)arg1;
- (id)serialQueue;
- (id)sessionArchives;
- (id)sessionIdentifierArchiveMap;
- (void)setStateRestorationSessionIdentifier:(id)arg1;
- (void)setStateRestorationSupported:(bool)arg1;
- (id)stateRestorationSessionIdentifier;

@end
