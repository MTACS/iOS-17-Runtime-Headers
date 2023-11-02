
@interface LPFetcherAudioResponse : LPFetcherResponse {
    LPAudio * _audio;
}

@property (nonatomic, readonly, retain) LPAudio *audio;

+ (id)audioPropertiesForFetcher:(id)arg1;

- (void).cxx_destruct;
- (id)audio;
- (id)initWithAudio:(id)arg1 fetcher:(id)arg2;

@end
