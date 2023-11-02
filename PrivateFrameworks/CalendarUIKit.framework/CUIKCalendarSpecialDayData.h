
@interface CUIKCalendarSpecialDayData : NSObject {
    struct CGColor { } * _cgColor;
    long long  _dayType;
    NSString * _locale;
}

@property (nonatomic, retain) struct CGColor { }*cgColor;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) long long dayType;
@property (nonatomic, copy) NSString *locale;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (void).cxx_destruct;
- (struct CGColor { }*)cgColor;
- (id)color;
- (long long)dayType;
- (id)init;
- (id)locale;
- (void)setCgColor:(struct CGColor { }*)arg1;
- (void)setColor:(id)arg1;
- (void)setDayType:(long long)arg1;
- (void)setLocale:(id)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)asCalendarSpecialDayData;

@end
