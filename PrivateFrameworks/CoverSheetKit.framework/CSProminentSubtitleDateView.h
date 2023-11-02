
@interface CSProminentSubtitleDateView : CSProminentTextElementView {
    NSString * _alternateCalendarIdentifier;
    NSLocale * _alternateCalendarLocale;
    NSDateFormatter * _alternateDateFormatter;
    NSDateFormatter * _formatter;
}

@property (nonatomic, copy) NSString *alternateCalendarIdentifier;
@property (nonatomic, retain) NSLocale *alternateCalendarLocale;
@property (nonatomic, retain) NSDateFormatter *alternateDateFormatter;
@property (nonatomic, retain) NSDateFormatter *formatter;

+ (unsigned long long)elementType;

- (void).cxx_destruct;
- (id)_alternateDateString;
- (id)_dateString;
- (void)_updateLabel;
- (bool)_wantsCompactForOrientation;
- (id)alternateCalendarIdentifier;
- (id)alternateCalendarLocale;
- (id)alternateDateFormatter;
- (id)formatter;
- (id)initWithDate:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (id)initWithDate:(id)arg1 textColor:(id)arg2;
- (id)overrideString;
- (void)setAlternateCalendarIdentifier:(id)arg1;
- (void)setAlternateCalendarIdentifier:(id)arg1 locale:(id)arg2;
- (void)setAlternateCalendarLocale:(id)arg1;
- (void)setAlternateDateFormatter:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFormatter:(id)arg1;

@end
