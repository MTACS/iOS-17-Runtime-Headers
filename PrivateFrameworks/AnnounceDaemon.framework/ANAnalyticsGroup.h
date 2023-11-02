
@interface ANAnalyticsGroup : NSObject {
    NSMutableArray * _announcements;
    NSMutableArray * _metadata;
}

@property (nonatomic, readonly) NSArray *announcements;
@property (nonatomic, readonly) NSArray *metadata;

- (void).cxx_destruct;
- (void)addAnnouncement:(id)arg1 metadata:(id)arg2;
- (id)announcements;
- (id)init;
- (id)metadata;

@end
