
@interface MTUIWorldClockCellView : UIView <MTClock> {
    UILabel * _combinedLabel;
    <MTUIWorldClockCellViewDelegate> * _delegate;
    MTUIDigitalClockLabel * _digitalClock;
    bool  _editing;
    UILabel * _nameLabel;
    long long  _nowInMinutes;
    bool  _shouldStackViews;
    bool  _started;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) UILabel *combinedLabel;
@property (nonatomic) <MTUIWorldClockCellViewDelegate> *delegate;
@property (nonatomic, readonly) MTUIDigitalClockLabel *digitalClock;
@property (nonatomic, readonly) UILabel *nameLabel;
@property (nonatomic, readonly) long long runMode;
@property (nonatomic) bool shouldStackViews;
@property (nonatomic, readonly) bool started;

+ (id)dayAndTimeZoneOffsetStringFromDate:(id)arg1 withTimeZoneOffset:(long long)arg2 timeZoneAbbreviation:(id)arg3 spaceBeforeTimeDesignator:(bool)arg4;
+ (id)dayAndTimeZoneOffsetStringFromDate:(id)arg1 withTimeZoneOffset:(long long)arg2 timeZoneAbbreviation:(id)arg3 spaceBeforeTimeDesignator:(bool)arg4 hoursOnly:(bool)arg5;
+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)_configureFonts;
- (double)coarseUpdateInterval;
- (id)combinedLabel;
- (id)delegate;
- (id)digitalClock;
- (void)handleTextSizeChange:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)localeChange:(id)arg1;
- (id)nameLabel;
- (long long)runMode;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setShouldStackViews:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (bool)shouldStackViews;
- (void)significantTimeChange:(id)arg1;
- (void)start;
- (bool)started;
- (void)stop;
- (double)updateInterval;
- (void)updateLabelAdjustFontSize;
- (void)updateTime;
- (void)updateTimeContinuously:(long long)arg1;

@end
