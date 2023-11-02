
@interface MTUpNextResult : NSObject {
    NSString * _episodeUuid;
    double  _modifiedDate;
    double  _modifiedDateScore;
    bool  _needsUpdate;
    MTUpNextScorePrototype * _upNextScore;
}

@property (nonatomic, copy) NSString *episodeUuid;
@property (nonatomic) double modifiedDate;
@property (nonatomic) double modifiedDateScore;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) MTUpNextScorePrototype *upNextScore;

- (void).cxx_destruct;
- (id)episodeUuid;
- (double)modifiedDate;
- (double)modifiedDateScore;
- (bool)needsUpdate;
- (void)setEpisodeUuid:(id)arg1;
- (void)setModifiedDate:(double)arg1;
- (void)setModifiedDateScore:(double)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setUpNextScore:(id)arg1;
- (id)upNextScore;
- (void)updateFor:(id)arg1;

@end
