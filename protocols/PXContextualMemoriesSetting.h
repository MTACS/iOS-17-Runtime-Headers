
@protocol PXContextualMemoriesSetting <NSObject>

@required

- (NSString *)headerTitle;
- (void)resetToDefault;
- (NSString *)title;

@optional

- (NSString *)subtitle;

@end
