
@interface CLSNowPlayingStreamEvent : NSObject {
    NSDate * _localEndDate;
    NSDate * _localStartDate;
    CLSNowPlayingStreamEventMetadata * _metadata;
}

@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly, copy) CLSNowPlayingStreamEventMetadata *metadata;

+ (id)playbackStreamEventDateSortDescriptors;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDuetKnowledgeEvent:(id)arg1;
- (id)localEndDate;
- (id)localStartDate;
- (id)metadata;

@end
