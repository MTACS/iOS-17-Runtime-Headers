
@interface ICDateHeadersUtilities : NSObject

+ (id)actionItemTitleWithDateHeadersType:(int)arg1;
+ (void)clearCache;
+ (int)defaultDateHeadersType;
+ (bool)isShowingQueryDateHeadersForDateHeadersType:(int)arg1;
+ (id)menuTitle;
+ (int)queryDateHeadersType;
+ (void)setDateHeadersUserPreference:(int)arg1 forKey:(id)arg2 postNotificationName:(id)arg3;
+ (void)setDefaultDateHeadersType:(int)arg1;
+ (void)setQueryDateHeadersType:(int)arg1;
+ (bool)showsQueryDateHeaders;
+ (id)stringForDateHeadersType:(int)arg1;
+ (bool)supportsQueryDateHeaders;

@end
