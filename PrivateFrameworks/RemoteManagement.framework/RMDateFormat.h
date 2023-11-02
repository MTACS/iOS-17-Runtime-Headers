
@interface RMDateFormat : NSObject

+ (id)_isoLocalTimeZoneDateFormatter;
+ (id)_isoLocalTimeZoneFractionalSecondsDateFormatter;
+ (id)_isoUTCDateFormatter;
+ (id)_isoUTCFractionalSecondsDateFormatter;
+ (id)dateWithStringLocalTimeZone:(id)arg1;
+ (id)dateWithStringLocalTimeZoneFractionalSeconds:(id)arg1;
+ (id)dateWithStringUTC:(id)arg1;
+ (id)dateWithStringUTCFractionalSeconds:(id)arg1;
+ (id)stringLocalTimeZoneFractionalSecondsWithDate:(id)arg1;
+ (id)stringLocalTimeZoneWithDate:(id)arg1;
+ (id)stringUTCFractionalSecondsWithDate:(id)arg1;
+ (id)stringUTCWithDate:(id)arg1;

@end
