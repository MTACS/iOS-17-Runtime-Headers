
@interface _CPLPruneRequestCounter : NSObject {
    NSCountedSet * _failedStatsPerResourceType;
    NSDate * _lastRequestDate;
    NSString * _statusKey;
    unsigned long long  _successSize;
    NSCountedSet * _successStatsPerResourceType;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) NSDictionary *statusDictionary;
@property (nonatomic, readonly) NSString *statusKey;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 statusKey:(id)arg2;
- (void)noteRequestForResource:(id)arg1 successful:(bool)arg2 prunedSize:(unsigned long long)arg3;
- (id)status;
- (id)statusDictionary;
- (id)statusKey;
- (id)title;

@end
