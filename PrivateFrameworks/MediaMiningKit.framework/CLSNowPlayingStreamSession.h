
@interface CLSNowPlayingStreamSession : NSObject {
    NSArray * _events;
    NSDate * _localEndDate;
    NSDate * _localStartDate;
}

@property (nonatomic, copy) NSArray *events;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;

+ (id)playbackStreamSessionDateSortDescriptors;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)events;
- (id)initWithDataCluster:(id)arg1;
- (id)initWithEvents:(id)arg1;
- (id)localEndDate;
- (id)localStartDate;
- (void)setEvents:(id)arg1;

@end
