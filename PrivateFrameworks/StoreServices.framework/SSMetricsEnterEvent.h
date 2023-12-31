
@interface SSMetricsEnterEvent : SSMetricsBaseEvent

@property (nonatomic, retain) NSString *enterType;
@property (nonatomic, retain) NSString *referringAppName;
@property (nonatomic, retain) NSString *referringURL;

- (id)description;
- (id)enterType;
- (id)init;
- (id)referringAppName;
- (id)referringURL;
- (void)setEnterType:(id)arg1;
- (void)setEnterTypeWithLaunchReason:(long long)arg1;
- (void)setReferringAppName:(id)arg1;
- (void)setReferringURL:(id)arg1;

@end
