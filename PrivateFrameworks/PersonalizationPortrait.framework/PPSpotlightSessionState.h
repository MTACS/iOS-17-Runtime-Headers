
@interface PPSpotlightSessionState : NSObject {
    NSMutableArray * _engagedBundleIds;
    NSMutableArray * _engagedSpotlightIds;
    NSMutableArray * _seenBundleIds;
    NSMutableArray * _seenSpotlightIds;
}

@property (nonatomic, retain) NSMutableArray *engagedBundleIds;
@property (nonatomic, retain) NSMutableArray *engagedSpotlightIds;
@property (nonatomic, retain) NSMutableArray *seenBundleIds;
@property (nonatomic, retain) NSMutableArray *seenSpotlightIds;

- (void).cxx_destruct;
- (id)engagedBundleIds;
- (id)engagedSpotlightIds;
- (id)init;
- (id)seenBundleIds;
- (id)seenSpotlightIds;
- (void)setEngagedBundleIds:(id)arg1;
- (void)setEngagedSpotlightIds:(id)arg1;
- (void)setSeenBundleIds:(id)arg1;
- (void)setSeenSpotlightIds:(id)arg1;

@end
