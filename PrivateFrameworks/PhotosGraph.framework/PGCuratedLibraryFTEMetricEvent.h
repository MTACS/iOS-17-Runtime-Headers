
@interface PGCuratedLibraryFTEMetricEvent : PGAbstractMetricEvent {
    NSString * _identifier;
    long long  _librarySizeRange;
    NSDate * _migrationDate;
    NSDictionary * _payload;
}

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithLibrarySizeRange:(long long)arg1 migrationDate:(id)arg2;
- (id)payload;

@end
