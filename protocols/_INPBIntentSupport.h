
@protocol _INPBIntentSupport <NSObject>

@required

+ (Class)intentsRestrictedWhileLockedType;
+ (Class)intentsSupportedType;

- (void)addIntentsRestrictedWhileLocked:(_INPBIntentType *)arg1;
- (void)addIntentsSupported:(_INPBIntentType *)arg1;
- (void)addSupportedMediaCategories:(NSString *)arg1;
- (void)clearIntentsRestrictedWhileLockeds;
- (void)clearIntentsSupporteds;
- (void)clearSupportedMediaCategories;
- (_INPBIntentType *)intentsRestrictedWhileLockedAtIndex:(unsigned long long)arg1;
- (NSArray *)intentsRestrictedWhileLockeds;
- (unsigned long long)intentsRestrictedWhileLockedsCount;
- (_INPBIntentType *)intentsSupportedAtIndex:(unsigned long long)arg1;
- (NSArray *)intentsSupporteds;
- (unsigned long long)intentsSupportedsCount;
- (void)setIntentsRestrictedWhileLockeds:(NSArray *)arg1;
- (void)setIntentsSupporteds:(NSArray *)arg1;
- (void)setSupportedMediaCategories:(NSArray *)arg1;
- (NSArray *)supportedMediaCategories;
- (NSString *)supportedMediaCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedMediaCategoriesCount;

@end
