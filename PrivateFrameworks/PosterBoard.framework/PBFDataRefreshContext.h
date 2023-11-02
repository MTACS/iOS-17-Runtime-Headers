
@interface PBFDataRefreshContext : NSObject {
    NSString * _component;
    NSDate * _lastRefreshDate;
    NSDate * _now;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *component;
@property (nonatomic, readonly) NSDate *lastRefreshDate;
@property (nonatomic, readonly) NSDate *now;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (id)dynamicDescriptorsRefreshContextForNow:(id)arg1 extension:(id)arg2 lastRefreshDate:(id)arg3 refreshStrategy:(long long)arg4;
+ (id)staticDescriptorsRefreshContextForNow:(id)arg1 extension:(id)arg2;

- (void).cxx_destruct;
- (id)component;
- (id)initWithComponent:(id)arg1 now:(id)arg2 lastRefreshDate:(id)arg3 userInfo:(id)arg4;
- (id)lastRefreshDate;
- (id)now;
- (id)userInfo;

@end
