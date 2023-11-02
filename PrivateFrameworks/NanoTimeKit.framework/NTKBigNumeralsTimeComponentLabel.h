
@interface NTKBigNumeralsTimeComponentLabel : UIView {
    UIColor * _color;
    NSDate * _date;
    CLKDevice * _device;
    const struct mach_header_64 { unsigned int x1; int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } * _dsoHandle;
    CLKFont * _filledFont;
    NSString * _filledFontSectName;
    unsigned long long  _fontVariant;
    NSDateFormatter * _formatter;
    CLKUIColoringLabel * _label;
    CLKFont * _outlinedFont;
    NSString * _outlinedFontSectName;
    unsigned long long  _style;
    unsigned long long  _timeComponent;
    CLKUIColoringLabel * _transitioningLabel;
    unsigned long long  _typeface;
    bool  _useLigatures;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long style;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long typeface;

+ (id)localeForTypeface:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_attributedStringForTypeface:(unsigned long long)arg1;
- (id)_fontForStyle:(unsigned long long)arg1;
- (double)_lastLineBaseline;
- (void)_updateLabelText;
- (void)_updateLocale;
- (void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromTypeface:(unsigned long long)arg2 toTypeface:(unsigned long long)arg3;
- (void)cleanupTransition;
- (id)color;
- (id)date;
- (void)dealloc;
- (id)font;
- (double)fontSize;
- (id)initWithDevice:(id)arg1 timeComponent:(unsigned long long)arg2 fontVariant:(unsigned long long)arg3 filledFontSectName:(id)arg4 outlineFontSectName:(id)arg5 dsoHandle:(const struct mach_header_64 { unsigned int x1; int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; }*)arg6 fontSize:(double)arg7 useLigatures:(bool)arg8;
- (void)layoutSubviews;
- (void)setColor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTypeface:(unsigned long long)arg1;
- (void)setupFontsForSize:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (long long)textAlignment;
- (unsigned long long)typeface;

@end
