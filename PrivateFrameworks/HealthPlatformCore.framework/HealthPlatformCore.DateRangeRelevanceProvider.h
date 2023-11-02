
@interface HealthPlatformCore.DateRangeRelevanceProvider : RERelevanceProvider {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  relevantDateInterval;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
