
@protocol SFReaderEventsListener <NSObject>

@required

- (void)contentDidBecomeReadyWithArticleText:(NSString *)arg1;
- (void)didCollectArticleContent:(NSDictionary *)arg1;
- (void)didCollectReaderContentForMail:(NSString *)arg1;
- (void)didCollectReadingListItemInfo:(NSDictionary *)arg1 bookmarkID:(NSNumber *)arg2;
- (void)didDetermineAdditionalTextSamples:(WBSReaderAvailabilityCheckResult *)arg1;
- (void)didDetermineReaderAvailability:(WBSReaderAvailabilityCheckResult *)arg1;
- (void)didDetermineReaderAvailabilityForDynamicCheck:(WBSReaderAvailabilityCheckResult *)arg1;
- (void)didPrepareReaderContentForPrinting:(_WKFrameHandle *)arg1;
- (void)didSetReaderConfiguration:(NSDictionary *)arg1;
- (void)readerTextWasExtracted:(NSString *)arg1 withMetadata:(NSDictionary *)arg2 wasDeterminingAvailabilility:(bool)arg3;

@end
