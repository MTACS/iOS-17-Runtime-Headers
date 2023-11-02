
@interface HKMultiTypeSampleIterator : NSObject <HKIterator> {
    NSMutableArray * _buffer;
    unsigned long long  _bufferSize;
    HKSample * _current;
    NSArray * _distinctByKeyPaths;
    HKQueryAnchor * _followingAnchor;
    HKHealthStore * _healthStore;
    unsigned long long  _limit;
    unsigned long long  _numberOfSamplesDelivered;
    HKSampleIteratorQueryCursor * _queryCursor;
    NSArray * _queryDescriptors;
    NSArray * _sortDescriptors;
    unsigned long long  _state;
    HKQueryAnchor * _upToAndIncludingAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKSample *sample;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_queryForNextPageIfNecessaryWithError:(id*)arg1;
- (bool)advanceWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithQueryDescriptors:(id)arg1 sortDescriptors:(id)arg2 bufferSize:(long long)arg3 healthStore:(id)arg4;
- (id)initWithQueryDescriptors:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 bufferSize:(unsigned long long)arg6 limit:(unsigned long long)arg7 healthStore:(id)arg8;
- (id)object;
- (id)sample;

@end
