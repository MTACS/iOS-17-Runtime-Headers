
@interface WFComplicationMetricsStorage : NSObject

+ (unsigned long long)appComplicationSlotsUsed;
+ (void)setAppComplicationSlotsUsed:(unsigned long long)arg1;
+ (void)setShortcutComplicationSlotsUsed:(unsigned long long)arg1;
+ (unsigned long long)shortcutComplicationSlotsUsed;

@end
