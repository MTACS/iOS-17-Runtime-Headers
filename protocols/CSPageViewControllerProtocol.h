
@protocol CSPageViewControllerProtocol <CSCoverSheetViewPresenting>

@required

+ (bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;

- (bool)authenticated;
- (<CSCoverSheetViewControllerProtocol> *)coverSheetViewController;
- (bool)isTransitioning;
- (CSLayoutStrategy *)layoutStrategy;
- (void)setCoverSheetViewController:(id <CSCoverSheetViewControllerProtocol>)arg1;
- (void)setLayoutStrategy:(CSLayoutStrategy *)arg1;
- (void)setTransitioning:(bool)arg1;

@optional

- (double)customListWidth;
- (double)dateTimeInsetX;
- (unsigned long long)dateTimeLayout;
- (double)listInsetX;
- (unsigned long long)listLayout;
- (unsigned long long)listWidthStrategy;
- (double)minimumDateToListSpacing;
- (NSString *)pageRole;

@end
