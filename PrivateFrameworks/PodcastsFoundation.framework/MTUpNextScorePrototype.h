
@interface MTUpNextScorePrototype : NSObject {
    double  _allPlayedEpisodesCount;
    double  _allPlayedEpisodesFromThisShowCount;
    double  _allPlayedEpsPercent;
    double  _allPlayedEpsWeight;
    double  _combinedScore;
    double  _episodesFromShowPlayedCount;
    double  _episodesFromShowPlayedPercent;
    double  _episodesFromShowTotalCount;
    double  _episodesFromShowWeight;
    double  _modifiedDateScore;
    double  _modifiedWeight;
}

@property (nonatomic) double allPlayedEpisodesCount;
@property (nonatomic) double allPlayedEpisodesFromThisShowCount;
@property (nonatomic) double allPlayedEpsPercent;
@property (nonatomic) double allPlayedEpsWeight;
@property (nonatomic) double combinedScore;
@property (nonatomic) double episodesFromShowPlayedCount;
@property (nonatomic) double episodesFromShowPlayedPercent;
@property (nonatomic) double episodesFromShowTotalCount;
@property (nonatomic) double episodesFromShowWeight;
@property (nonatomic) double modifiedDateScore;
@property (nonatomic) double modifiedWeight;

- (double)allPlayedEpisodesCount;
- (double)allPlayedEpisodesFromThisShowCount;
- (double)allPlayedEpsPercent;
- (double)allPlayedEpsWeight;
- (double)combinedScore;
- (double)episodesFromShowPlayedCount;
- (double)episodesFromShowPlayedPercent;
- (double)episodesFromShowTotalCount;
- (double)episodesFromShowWeight;
- (double)modifiedDateScore;
- (double)modifiedWeight;
- (void)setAllPlayedEpisodesCount:(double)arg1;
- (void)setAllPlayedEpisodesFromThisShowCount:(double)arg1;
- (void)setAllPlayedEpsPercent:(double)arg1;
- (void)setAllPlayedEpsWeight:(double)arg1;
- (void)setCombinedScore:(double)arg1;
- (void)setEpisodesFromShowPlayedCount:(double)arg1;
- (void)setEpisodesFromShowPlayedPercent:(double)arg1;
- (void)setEpisodesFromShowTotalCount:(double)arg1;
- (void)setEpisodesFromShowWeight:(double)arg1;
- (void)setModifiedDateScore:(double)arg1;
- (void)setModifiedWeight:(double)arg1;

@end
