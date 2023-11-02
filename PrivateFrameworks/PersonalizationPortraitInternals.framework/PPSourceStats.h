
@interface PPSourceStats : NSObject <MLFeatureProvider> {
    double  _avgRefCount;
    NSDate * _earliestDate;
    NSDate * _latestDate;
    long long  _maxRefCount;
    double  _medianRefCount;
    long long  _minRefCount;
    unsigned long long  _recordCount;
    long long  _uniqueBundleIdCount;
    long long  _uniqueDocIdCount;
}

@property (nonatomic, readonly) double avgRefCount;
@property (nonatomic, readonly) NSDate *earliestDate;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) NSDate *latestDate;
@property (nonatomic, readonly) long long maxRefCount;
@property (nonatomic, readonly) double medianRefCount;
@property (nonatomic, readonly) long long minRefCount;
@property (nonatomic, readonly) unsigned long long recordCount;
@property (nonatomic, readonly) long long uniqueBundleIdCount;
@property (nonatomic, readonly) long long uniqueDocIdCount;

- (void).cxx_destruct;
- (double)avgRefCount;
- (id)earliestDate;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithMinRefCount:(long long)arg1 maxRefCount:(long long)arg2 avgRefCount:(double)arg3 medianRefCount:(double)arg4 earliestDate:(id)arg5 latestDate:(id)arg6 uniqueBundleIdCount:(long long)arg7 uniqueDocIdCount:(long long)arg8 recordCount:(unsigned long long)arg9;
- (id)latestDate;
- (long long)maxRefCount;
- (double)medianRefCount;
- (long long)minRefCount;
- (unsigned long long)recordCount;
- (id)toDictionary;
- (long long)uniqueBundleIdCount;
- (long long)uniqueDocIdCount;

@end
