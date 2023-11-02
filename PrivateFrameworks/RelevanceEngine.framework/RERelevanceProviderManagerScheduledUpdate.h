
@interface RERelevanceProviderManagerScheduledUpdate : RERelevanceProviderManagerUpdate {
    NSDate * _updateDate;
}

@property (nonatomic, readonly) NSDate *updateDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProvider:(id)arg1 updateDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)updateDate;

@end
