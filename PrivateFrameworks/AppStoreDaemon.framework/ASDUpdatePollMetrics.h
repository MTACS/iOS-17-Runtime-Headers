
@interface ASDUpdatePollMetrics : NSObject {
    NSArray * _bundleIDs;
    NSDate * _pollTime;
    NSString * _reason;
}

@property (nonatomic, copy) NSArray *bundleIDs;
@property (nonatomic, copy) NSDate *pollTime;
@property (nonatomic, copy) NSString *reason;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)pollTime;
- (id)reason;
- (void)setBundleIDs:(id)arg1;
- (void)setPollTime:(id)arg1;
- (void)setReason:(id)arg1;

@end
