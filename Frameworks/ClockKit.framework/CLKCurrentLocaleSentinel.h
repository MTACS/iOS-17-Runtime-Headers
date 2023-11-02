
@interface CLKCurrentLocaleSentinel : NSObject

+ (id)shared;

- (void)_handleLocaleChange;
- (id)_init;

@end
