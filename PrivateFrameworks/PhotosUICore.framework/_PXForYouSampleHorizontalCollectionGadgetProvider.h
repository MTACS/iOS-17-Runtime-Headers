
@interface _PXForYouSampleHorizontalCollectionGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>

@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;

- (long long)forYouContentIdentifier;
- (id)init;
- (id)mostRecentContentDate;

@end
