
@interface PGFlexMusicCuration : NSObject {
    void bestSongSuggestions;
    void curatorVersion;
    void secondarySongSuggestions;
}

@property (nonatomic, readonly) NSArray *bestSongSuggestions;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *secondarySongSuggestions;

- (void).cxx_destruct;
- (id)bestSongSuggestions;
- (id)description;
- (id)init;
- (id)jsonRepresentation;
- (id)secondarySongSuggestions;

@end
