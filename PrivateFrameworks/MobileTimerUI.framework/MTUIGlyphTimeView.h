
@interface MTUIGlyphTimeView : UIView {
    UIImageView * _glyphImageView;
    NSString * _glyphName;
    unsigned long long  _style;
    UILabel * _timeLabel;
}

@property (nonatomic, retain) UIImageView *glyphImageView;
@property (nonatomic, retain) NSString *glyphName;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) UILabel *timeLabel;

- (void).cxx_destruct;
- (id)glyphImageView;
- (id)glyphName;
- (id)initWithFont:(id)arg1 textColor:(id)arg2 glyphName:(id)arg3 style:(unsigned long long)arg4;
- (void)setComponentColor:(id)arg1;
- (void)setGlyphImageView:(id)arg1;
- (void)setGlyphName:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupGlyphName:(id)arg1 size:(double)arg2 glyphColor:(id)arg3;
- (void)setupTimeLabelWithFont:(id)arg1 textColor:(id)arg2 style:(unsigned long long)arg3;
- (unsigned long long)style;
- (id)timeLabel;

@end
