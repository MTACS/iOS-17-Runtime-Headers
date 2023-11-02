
@interface HDCloudSyncStatus : NSObject {
    NSDate * _lastSuccessfulLitePushDate;
    NSDate * _lastSuccessfulPullDate;
    NSDate * _lastSuccessfulPushDate;
}

@property (nonatomic, retain) NSDate *lastSuccessfulLitePushDate;
@property (nonatomic, retain) NSDate *lastSuccessfulPullDate;
@property (nonatomic, retain) NSDate *lastSuccessfulPushDate;

- (void).cxx_destruct;
- (id)lastSuccessfulLitePushDate;
- (id)lastSuccessfulPullDate;
- (id)lastSuccessfulPushDate;
- (void)setLastSuccessfulLitePushDate:(id)arg1;
- (void)setLastSuccessfulPullDate:(id)arg1;
- (void)setLastSuccessfulPushDate:(id)arg1;

@end
