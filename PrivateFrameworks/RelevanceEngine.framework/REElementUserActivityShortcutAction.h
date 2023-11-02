
@interface REElementUserActivityShortcutAction : REElementUserActivityAction {
    bool  _isLocalDonation;
}

@property (nonatomic, readonly) bool isLocalDonation;

- (void)_submitMetricsWithSuccess:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithUserActivity:(id)arg1 applicationID:(id)arg2 isLocalDonation:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLocalDonation;

@end
