
@interface REElementUserActivityAction : REElementAction {
    NSString * _applicationID;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, readonly, copy) NSUserActivity *userActivity;

- (void).cxx_destruct;
- (void)_performWithContext:(id)arg1;
- (void)_submitMetricsWithSuccess:(bool)arg1;
- (id)applicationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithUserActivity:(id)arg1 applicationID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)userActivity;

@end
