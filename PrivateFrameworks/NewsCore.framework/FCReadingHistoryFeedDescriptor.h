
@interface FCReadingHistoryFeedDescriptor : FCPrivateZoneFeedDescriptor

- (id)backingHeadlineIDs;
- (id)initWithPrivateDataController:(id)arg1 identifier:(id)arg2 feedType:(long long)arg3;
- (id)initWithReadingHistory:(id)arg1;
- (id)name;
- (id)readingHistory;

@end
