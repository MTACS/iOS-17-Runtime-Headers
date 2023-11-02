
@interface MPCRadioPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {
    bool  _continueListeningStation;
    MPCModelRadioContentReference * _nowPlayingContentReference;
    MPModelRadioStation * _radioStation;
    NSURL * _radioStationURL;
    MPCModelRadioContentReference * _seedContentReference;
}

@property (nonatomic) bool continueListeningStation;
@property (nonatomic, copy) MPCModelRadioContentReference *nowPlayingContentReference;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, copy) NSURL *radioStationURL;
@property (nonatomic, copy) MPCModelRadioContentReference *seedContentReference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)continueListeningStation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nowPlayingContentReference;
- (id)radioStation;
- (id)radioStationURL;
- (id)seedContentReference;
- (void)setContinueListeningStation:(bool)arg1;
- (void)setNowPlayingContentReference:(id)arg1;
- (void)setRadioStation:(id)arg1;
- (void)setRadioStationURL:(id)arg1;
- (void)setSeedContentReference:(id)arg1;

@end
