
@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext * _playbackContext;
    long long  _replaceIntent;
}

- (void).cxx_destruct;
- (id)asMusicPlaybackContextWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (id)description;
- (id)initWithPlaybackContext:(id)arg1;
- (bool)isRequestingImmediatePlayback;
- (id)privateListeningOverride;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)arg1;
- (id)siriAssetInfo;
- (id)siriRecommendationIdentifier;
- (id)siriWHAMetricsInfo;

@end
