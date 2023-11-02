
@interface FCFeedItemsWithIDLookupResult : NSObject {
    NSArray * _feedItems;
    NSDictionary * _sectionIDsByFeedID;
}

@property (nonatomic, retain) NSArray *feedItems;
@property (nonatomic, retain) NSDictionary *sectionIDsByFeedID;

- (void).cxx_destruct;
- (id)feedItems;
- (id)init;
- (id)initWithSectionIDByFeedID:(id)arg1 feedItems:(id)arg2;
- (id)sectionIDsByFeedID;
- (void)setFeedItems:(id)arg1;
- (void)setSectionIDsByFeedID:(id)arg1;

@end
