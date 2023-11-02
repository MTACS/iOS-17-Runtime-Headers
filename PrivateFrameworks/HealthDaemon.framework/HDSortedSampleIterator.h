
@interface HDSortedSampleIterator : NSObject <HDDeletedObjectIterator, HDSampleIterator> {
    HKSortedQueryAnchor * _anchor;
    long long  _bufferSize;
    struct tuple<long long, HKDeletedObject *> { 
        struct __tuple_impl<std::__tuple_indices<0, 1>, long long, HKDeletedObject *> { 
            long long __value_; 
            HKDeletedObject *__value_; 
        } __base_; 
    }  _currentDeletedObject;
    id  _currentHead;
    struct tuple<long long, HKSample *> { 
        struct __tuple_impl<std::__tuple_indices<0, 1>, long long, HKSample *> { 
            long long __value_; 
            HKSample *__value_; 
        } __base_; 
    }  _currentSample;
    struct vector<std::tuple<long long, HKDeletedObject *>, std::allocator<std::tuple<long long, HKDeletedObject *>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::tuple<long long, HKDeletedObject *> *, std::allocator<std::tuple<long long, HKDeletedObject *>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _deletedObjectsBuffer;
    bool  _includeDeletedObjects;
    bool  _isComplete;
    NSError * _lastError;
    HDProfile * _profile;
    HDQueryDescriptor * _queryDescriptor;
    NSSet * _restrictedSourceEntities;
    struct vector<std::tuple<long long, HKSample *>, std::allocator<std::tuple<long long, HKSample *>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::tuple<long long, HKSample *> *, std::allocator<std::tuple<long long, HKSample *>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _sampleBuffer;
    NSArray * _sortDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) HKDeletedObject *deletedObject;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKSortedQueryAnchor *nextAnchor;
@property (nonatomic, readonly) long long objectID;
@property (nonatomic, readonly) HKSample *sample;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)advanceWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedObject;
- (unsigned long long)hash;
- (id)init;
- (id)initWithQueryDescriptor:(id)arg1 includeDeletedObjects:(bool)arg2 sortDescriptors:(id)arg3 anchor:(id)arg4 bufferSize:(long long)arg5 profile:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)nextAnchor;
- (id)object;
- (long long)objectID;
- (id)sample;

@end
