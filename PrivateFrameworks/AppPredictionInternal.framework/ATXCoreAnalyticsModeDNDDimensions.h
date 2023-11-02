
@interface ATXCoreAnalyticsModeDNDDimensions : _ATXCoreAnalyticsDimensionSet {
    NSNumber * _isDND;
    NSString * _mode;
}

@property (nonatomic, readonly) NSNumber *isDND;
@property (nonatomic, readonly) NSString *mode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreAnalyticsDictionary;
- (id)initWithMode:(id)arg1 isDND:(bool)arg2;
- (id)initWithMode:(id)arg1 nullableIsDND:(id)arg2;
- (id)isDND;
- (id)mode;
- (id)powerset;

@end
