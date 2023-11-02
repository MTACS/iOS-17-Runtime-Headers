
@interface PXSharedAlbumActivityAccompanyingInboxGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>

@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;

- (long long)forYouContentIdentifier;
- (id)init;
- (id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2;
- (id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contentGadgetProvider:(id)arg2 title:(id)arg3 horizontalCollectionGadgetClass:(Class)arg4;
- (id)mostRecentContentDate;

@end
