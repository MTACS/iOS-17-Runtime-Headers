
@interface PRPreferences : NSObject

@property (getter=isAlternateCalendarEnabled, nonatomic, readonly) bool alternateCalendarEnabled;

+ (id)sharedPreferences;

- (bool)isAlternateCalendarEnabled;

@end
