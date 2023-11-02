
@interface ATXModeDimensionSet : _ATXCoreAnalyticsDimensionSet {
    NSString * _mode;
}

@property (nonatomic, readonly) NSString *mode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreAnalyticsDictionary;
- (id)initWithMode:(id)arg1;
- (id)mode;
- (id)powerset;

@end
