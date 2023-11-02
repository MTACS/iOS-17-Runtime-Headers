
@protocol _INPBListShortcutsIntentResponse <NSObject>

@required

+ (Class)shortcutsType;

- (void)addShortcuts:(_INPBShortcutOverview *)arg1;
- (void)clearShortcuts;
- (void)setShortcuts:(NSArray *)arg1;
- (NSArray *)shortcuts;
- (_INPBShortcutOverview *)shortcutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shortcutsCount;

@end
