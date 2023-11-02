
@protocol BLTSectionInfoObserverDelegate <NSObject>

@required

- (void)sectionInfoObserver:(BLTSectionInfoObserver *)arg1 updatedSectionInfoForSectionIDs:(NSArray *)arg2 transaction:(BLTTransaction *)arg3;

@optional

- (void)sectionInfoObserver:(BLTSectionInfoObserver *)arg1 removedSectionWithSectionID:(NSString *)arg2 transaction:(BLTTransaction *)arg3;

@end
