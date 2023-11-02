
@interface MTUtilities : NSObject

+ (id)dayAndTimeZoneOffsetStringFromDate:(id)arg1 withTimeZoneOffset:(long long)arg2 timeZoneAbbreviation:(id)arg3 spaceBeforeTimeDesignator:(bool)arg4 hoursOnly:(bool)arg5 numericOnly:(bool)arg6;
+ (void)logMessage:(id)arg1;
+ (id)mtCityFromWorldClockCity:(id)arg1;
+ (bool)mtSBUIIsSystemApertureEnabled;
+ (id)widgetOverrideDate;
+ (id)widgetURL;

@end
