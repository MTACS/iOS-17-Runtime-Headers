
@interface SHSyncedLyrics : NSObject <NSSecureCoding> {
    <SHSyncedLyricsDelegate> * _delegate;
    NSArray * _lines;
    NSDate * _lyricsStartDate;
    double  _preCueDuration;
    NSArray * _songwriters;
    double  _timeWarp;
    NSTimer * _timer;
}

@property (nonatomic) <SHSyncedLyricsDelegate> *delegate;
@property (nonatomic, retain) NSArray *lines;
@property (nonatomic, readonly) NSDate *lyricsStartDate;
@property (nonatomic) double preCueDuration;
@property (nonatomic, retain) NSArray *songwriters;
@property (nonatomic) double timeWarp;
@property (nonatomic, retain) NSTimer *timer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentLyricLineForOffset:(double)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (double)fireTimeForLine:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLyricsStartDate:(id)arg1 lines:(id)arg2 songwriters:(id)arg3;
- (id)lines;
- (id)lyricsStartDate;
- (double)offsetFromStartDate;
- (double)preCueDuration;
- (void)setDelegate:(id)arg1;
- (void)setLines:(id)arg1;
- (void)setPreCueDuration:(double)arg1;
- (void)setSongwriters:(id)arg1;
- (void)setTimeWarp:(double)arg1;
- (void)setTimer:(id)arg1;
- (id)songwriters;
- (void)startSyncing;
- (void)stopSyncing;
- (double)timeToLine:(id)arg1 afterDuration:(double)arg2;
- (double)timeWarp;
- (id)timer;

@end
