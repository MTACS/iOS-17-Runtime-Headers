
@interface MPCModelRadioGetTracksResponse : NSObject {
    long long  _tracklistAction;
    MPSectionedCollection * _tracks;
}

@property (nonatomic, readonly) long long tracklistAction;
@property (nonatomic, readonly, copy) MPSectionedCollection *tracks;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTracks:(id)arg1 tracklistAction:(long long)arg2;
- (long long)tracklistAction;
- (id)tracks;

@end
