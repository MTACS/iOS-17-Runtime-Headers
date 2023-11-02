
@interface CSProminentTextElementView : CSProminentElementView <CSProminentTextDefining> {
    NSDate * _date;
    NSString * _overrideString;
    UIFont * _primaryFont;
    UIColor * _primaryTextColor;
    UILabel * _textLabel;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *overrideString;
@property (nonatomic, retain) UIFont *primaryFont;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, readonly) UILabel *textLabel;

+ (unsigned long long)elementType;

- (void).cxx_destruct;
- (id)date;
- (id)displayString;
- (id)initWithDate:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)layoutSubviews;
- (id)overrideString;
- (id)primaryFont;
- (id)primaryTextColor;
- (void)setDate:(id)arg1;
- (void)setOverrideString:(id)arg1;
- (void)setPrimaryFont:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (id)textLabel;

@end
