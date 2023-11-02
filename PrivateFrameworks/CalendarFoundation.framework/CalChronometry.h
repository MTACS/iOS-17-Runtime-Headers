
@interface CalChronometry : NSObject

+ (void)_configureChronometry;
+ (void)_currentLocaleDidChange:(id)arg1;
+ (void)_currentTimeZoneDidChange:(id)arg1;
+ (void)_updateActiveCalendar;
+ (void)_updateActiveTimeZone;
+ (void)_updateEveything;
+ (void)_updateForLocaleChange;
+ (id)activeCalendar;
+ (id)activeTimeZone;
+ (id)currentLanguageCode;
+ (id)currentLocationCode;
+ (void)initialize;
+ (void)setActiveTimeZone:(id)arg1;

@end
