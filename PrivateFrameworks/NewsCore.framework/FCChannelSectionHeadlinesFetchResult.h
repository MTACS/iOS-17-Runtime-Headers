
@interface FCChannelSectionHeadlinesFetchResult : NSObject {
    <FCChannelProviding> * _channel;
    NSArray * _sectionHeadlinesGroups;
}

@property (nonatomic, retain) <FCChannelProviding> *channel;
@property (nonatomic, retain) NSArray *sectionHeadlinesGroups;

- (void).cxx_destruct;
- (id)channel;
- (id)init;
- (id)initWithChannel:(id)arg1 sectionHeadlinesGroups:(id)arg2;
- (id)sectionHeadlinesGroups;
- (void)setChannel:(id)arg1;
- (void)setSectionHeadlinesGroups:(id)arg1;

@end
