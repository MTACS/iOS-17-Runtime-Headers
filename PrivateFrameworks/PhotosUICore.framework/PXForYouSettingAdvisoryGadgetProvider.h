
@interface PXForYouSettingAdvisoryGadgetProvider : PXGadgetProvider <PXForYouRankable>

@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;

- (unsigned long long)estimatedNumberOfGadgets;
- (long long)forYouContentIdentifier;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (id)mostRecentContentDate;

@end
