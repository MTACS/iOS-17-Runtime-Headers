
@interface HDMultiTypeSortedSampleIterator : NSObject <HDDeletedObjectIterator, HDRestorableIterator, HDSampleIterator> {
    HKSortedQueryAnchor * _anchor;
    long long  _bufferSize;
    bool  _includeDeletedObjects;
    bool  _isInitialized;
    NSMutableArray * _iterators;
    HDSortedSampleIterator * _nextIterator;
    HDProfile * _profile;
    NSArray * _queryDescriptors;
    NSArray * _sortDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) HKDeletedObject *deletedObject;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long objectID;
@property (nonatomic, readonly) HKSample *sample;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)advanceWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedObject;
- (unsigned long long)hash;
- (id)init;
- (id)initWithQueryDescriptors:(id)arg1 includeDeletedObjects:(bool)arg2 anchor:(id)arg3 sortDescriptors:(id)arg4 bufferSize:(long long)arg5 profile:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)iteratorStateData;
- (id)object;
- (long long)objectID;
- (bool)restoreIteratorStateFromData:(id)arg1 error:(id*)arg2;
- (id)sample;

@end
