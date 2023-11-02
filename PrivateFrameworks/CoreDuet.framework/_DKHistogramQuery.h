
@interface _DKHistogramQuery : _DKQuery <_DKExecutableQuery> {
    NSString * _customIdentifier;
    id /* block */  _histogramHandler;
    bool  _includeLocalResults;
    bool  _includeRemoteResults;
    NSDateInterval * _interval;
    unsigned long long  _minimumOccurrencesForInclusion;
    NSPredicate * _predicate;
    long long  _remoteHistogramLimit;
    _DKEventStream * _stream;
    NSArray * _valueKeyPaths;
}

@property (nonatomic, copy) id /* block */ histogramHandler;
@property (nonatomic) bool includeLocalResults;
@property (nonatomic) bool includeRemoteResults;
@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic) unsigned long long minimumOccurrencesForInclusion;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) long long remoteHistogramLimit;
@property (nonatomic, readonly) _DKEventStream *stream;
@property (nonatomic, retain) NSArray *valueKeyPaths;

+ (id)histogramQueryForPersistedHistogramsForStream:(id)arg1 withCustomIdentifier:(id)arg2;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2 predicate:(id)arg3 valueKeyPaths:(id)arg4;
+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2 withPredicate:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id /* block */)histogramHandler;
- (bool)includeLocalResults;
- (bool)includeRemoteResults;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interval;
- (unsigned long long)minimumOccurrencesForInclusion;
- (id)predicate;
- (long long)remoteHistogramLimit;
- (void)setHistogramHandler:(id /* block */)arg1;
- (void)setIncludeLocalResults:(bool)arg1;
- (void)setIncludeRemoteResults:(bool)arg1;
- (void)setMinimumOccurrencesForInclusion:(unsigned long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRemoteHistogramLimit:(long long)arg1;
- (void)setValueKeyPaths:(id)arg1;
- (id)stream;
- (id)valueKeyPaths;

@end
