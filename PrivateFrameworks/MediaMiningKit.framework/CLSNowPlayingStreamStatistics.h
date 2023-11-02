
@interface CLSNowPlayingStreamStatistics : NSObject {
    double  _maxDurationInSeconds;
    double  _minDurationInSeconds;
    NSArray * _sortedAlbums;
    NSArray * _sortedArtists;
    NSArray * _sortedGenres;
    NSArray * _sortedSessions;
    NSArray * _sortedSources;
    NSArray * _sortedTitles;
}

@property (nonatomic, readonly) double maxDurationInSeconds;
@property (nonatomic, readonly) double minDurationInSeconds;
@property (nonatomic, readonly) NSArray *sortedAlbums;
@property (nonatomic, readonly) NSArray *sortedArtists;
@property (nonatomic, readonly) NSArray *sortedGenres;
@property (nonatomic, readonly) NSArray *sortedSessions;
@property (nonatomic, readonly) NSArray *sortedSources;
@property (nonatomic, readonly) NSArray *sortedTitles;

- (void).cxx_destruct;
- (void)computeStatistics;
- (id)initWithNowPlayingStreamSessions:(id)arg1;
- (void)logStatistics;
- (double)maxDurationInSeconds;
- (double)minDurationInSeconds;
- (id)sortedAlbums;
- (id)sortedArtists;
- (id)sortedGenres;
- (id)sortedSessions;
- (id)sortedSources;
- (id)sortedTitles;

@end
