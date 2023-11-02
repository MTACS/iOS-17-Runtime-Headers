
@interface SFWatchMetrics : NSObject {
    double  _closeButtonTopToBaselineSpacing;
    double  _headerButtonFontPointSize;
    double  _headerButtonPadding;
}

@property (nonatomic, readonly) double closeButtonTopToBaselineSpacing;
@property (nonatomic, readonly) double headerButtonFontPointSize;
@property (nonatomic, readonly) double headerButtonPadding;
@property (nonatomic, readonly) double minimumFontScaleFactor;

+ (id)currentMetrics;

- (double)closeButtonTopToBaselineSpacing;
- (double)headerButtonFontPointSize;
- (double)headerButtonPadding;
- (id)init;
- (double)minimumFontScaleFactor;

@end
