
@interface PGSettlingEffectWallpaperSuggesterLogger : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
}

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1;
- (void)logFilteringStatistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; struct { int x_8_1_1; int x_8_1_2; } x8; struct { int x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; int x_9_1_5; int x_9_1_6; int x_9_1_7; int x_9_1_8; int x_9_1_9; int x_9_1_10; int x_9_1_11; int x_9_1_12; int x_9_1_13; } x9; struct { int x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; int x12; })arg1 assetGaterStatistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; })arg2;
- (void)logHighlightStatistics:(struct { int x1; int x2; int x3; })arg1;
- (void)logPosterFilteringStatistics:(struct { int x1; int x2; })arg1;
- (void)logSettlingEffectScoreRequest:(int)arg1;
- (void)logStats:(int)arg1 reason:(id)arg2;

@end
