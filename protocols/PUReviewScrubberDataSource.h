
@protocol PUReviewScrubberDataSource <NSObject>

@required

- (unsigned long long)reviewScrubber:(PUReviewScrubber *)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (bool)reviewScrubber:(PUReviewScrubber *)arg1 shouldProvideFeedbackForCellAtIndexPath:(NSIndexPath *)arg2;

@optional

- (unsigned long long)numberOfSectionsInReviewScrubber:(PUReviewScrubber *)arg1;

@end
