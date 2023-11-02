
@interface SPRecentTopic : NSObject {
    NSDate * _engagementDate;
    NSNumber * _score;
    SFTopic * _topic;
}

@property (nonatomic, readonly) NSDate *engagementDate;
@property (nonatomic, readonly) NSNumber *score;
@property (nonatomic, readonly) SFTopic *topic;

- (void).cxx_destruct;
- (id)engagementDate;
- (id)initWithTopic:(id)arg1 score:(id)arg2 engagementDate:(id)arg3;
- (id)score;
- (id)topic;

@end
