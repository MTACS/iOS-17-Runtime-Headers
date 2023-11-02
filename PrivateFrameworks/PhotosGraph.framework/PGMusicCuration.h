
@interface PGMusicCuration : NSObject {
    void bestMusicSuggestions;
    void curatorVersion;
    void musicCurationInfo;
    void musicForLocation;
    void musicForPerformer;
    void musicForTime;
    void musicForYou;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *keySongAdamID;
@property (nonatomic, readonly) NSNumber *keySongArousal;
@property (nonatomic, readonly) NSString *keySongArtist;
@property (nonatomic, readonly) NSString *keySongTitle;
@property (nonatomic, readonly) NSNumber *keySongValence;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)keySongAdamID;
- (id)keySongArousal;
- (id)keySongArtist;
- (id)keySongTitle;
- (id)keySongValence;

@end
