
@interface CSProminentSubtitleView : CSProminentTextElementView {
    CSProminentSubtitleDateView * _compactDateView;
    CSProminentSubtitleDateView * _dateView;
}

@property (nonatomic, retain) CSProminentSubtitleDateView *compactDateView;
@property (nonatomic, retain) CSProminentSubtitleDateView *dateView;

+ (unsigned long long)elementType;

- (void).cxx_destruct;
- (bool)_usesCompactDate;
- (id)compactDateView;
- (id)dateView;
- (id)initWithDate:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)layoutSubviews;
- (void)setCompactDateView:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateView:(id)arg1;

@end
