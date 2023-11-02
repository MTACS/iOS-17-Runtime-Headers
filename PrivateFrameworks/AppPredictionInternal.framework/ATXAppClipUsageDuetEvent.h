
@interface ATXAppClipUsageDuetEvent : ATXDuetEvent {
    NSString * _clipBundleId;
    NSDate * _launchDate;
    int  _launchReason;
    NSString * _parentAppBundleId;
    double  _timeSinceDownload;
    NSString * _urlHash;
    NSString * _webClipBundleId;
}

@property (nonatomic, readonly) NSString *clipBundleId;
@property (nonatomic, readonly) NSDate *launchDate;
@property (nonatomic, readonly) int launchReason;
@property (nonatomic, readonly) NSString *parentAppBundleId;
@property (nonatomic, readonly) double timeSinceDownload;
@property (nonatomic, readonly) NSString *urlHash;
@property (nonatomic, readonly) NSString *webClipBundleId;

- (void).cxx_destruct;
- (id)clipBundleId;
- (id)identifier;
- (id)initWithContext:(id)arg1 modifiedDate:(id)arg2;
- (id)initWithContextValue:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithCurrentContextStoreValues:(id)arg1;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithLaunchDate:(id)arg1 timeSinceDownload:(double)arg2 urlHash:(id)arg3 clipBundleId:(id)arg4 parentAppBundleId:(id)arg5 webClipBundleId:(id)arg6 launchReason:(int)arg7;
- (id)launchDate;
- (int)launchReason;
- (int)launchReasonFromString:(id)arg1;
- (id)loadNumberFromMetadata:(id)arg1 key:(id)arg2;
- (id)loadStringFromMetadata:(id)arg1 key:(id)arg2;
- (id)parentAppBundleId;
- (double)timeSinceDownload;
- (id)urlHash;
- (id)webClipBundleId;

@end
