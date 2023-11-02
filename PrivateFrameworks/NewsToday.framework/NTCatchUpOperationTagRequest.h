
@interface NTCatchUpOperationTagRequest : NSObject <NSCopying> {
    long long  _cutoffTime;
    long long  _fetchingBin;
    unsigned long long  _headlinesPerFeedFetchCount;
    NSString * _tagID;
}

@property (nonatomic, readonly) long long cutoffTime;
@property (nonatomic, readonly) long long fetchingBin;
@property (nonatomic, readonly) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic, readonly, copy) NSString *tagID;

- (void).cxx_destruct;
- (long long)cutoffTime;
- (long long)fetchingBin;
- (unsigned long long)headlinesPerFeedFetchCount;
- (id)init;
- (id)initWithTagTodaySectionSpecificConfig:(id)arg1 tagID:(id)arg2;
- (id)tagID;

@end
