
@interface PXForYouRecentInterestHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>

@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;

- (long long)forYouContentIdentifier;
- (id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2;
- (id)mostRecentContentDate;

@end
