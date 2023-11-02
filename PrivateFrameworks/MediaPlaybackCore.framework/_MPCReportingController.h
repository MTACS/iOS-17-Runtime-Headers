
@interface _MPCReportingController : NSObject {
    MPCLyricsReportingController * _lyricsReportingController;
    MPCPlaybackEngine * _playbackEngine;
}

@property (nonatomic, retain) MPCLyricsReportingController *lyricsReportingController;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;

- (void).cxx_destruct;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)lyricsReportingController;
- (id)playbackEngine;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)setLyricsReportingController:(id)arg1;

@end
