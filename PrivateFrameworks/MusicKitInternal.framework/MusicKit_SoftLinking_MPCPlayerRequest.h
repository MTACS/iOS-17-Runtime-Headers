
@interface MusicKit_SoftLinking_MPCPlayerRequest : NSObject {
    MPCPlayerRequest * _underlyingPlayerRequest;
}

@property (nonatomic, readonly) MPCPlayerRequest *_underlyingPlayerRequest;
@property (nonatomic) long long forwardCount;
@property (nonatomic) long long historyCount;
@property (nonatomic, retain) <MusicKit_SoftLinking_MPCPlayerPath> *playerPath;

- (void).cxx_destruct;
- (id)_errorFromUnderlyingError:(id)arg1;
- (id)_underlyingPlayerRequest;
- (long long)forwardCount;
- (long long)historyCount;
- (id)initWithPath:(id)arg1;
- (id)initWithUnderlyingPlayerRequest:(id)arg1;
- (void)performWithCompletion:(id /* block */)arg1;
- (id)playerPath;
- (void)setForwardCount:(long long)arg1;
- (void)setHistoryCount:(long long)arg1;
- (void)setPlayerPath:(id)arg1;

@end
