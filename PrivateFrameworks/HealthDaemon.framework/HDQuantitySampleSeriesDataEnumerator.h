
@interface HDQuantitySampleSeriesDataEnumerator : NSObject {
    long long  _HFDKey;
    unsigned char  _UUIDBytes;
    unsigned long long  _bufferSize;
    long long  _count;
    struct deque<std::tuple<double, double, float>, std::allocator<std::tuple<double, double, float>>> { 
        struct __split_buffer<std::tuple<double, double, float> *, std::allocator<std::tuple<double, double, float> *>> { 
            void **__first_; 
            void **__begin_; 
            void **__end_; 
            struct __compressed_pair<std::tuple<double, double, float> **, std::allocator<std::tuple<double, double, float> *>> { 
                void **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<std::tuple<double, double, float>>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _data;
    long long  _dataTypeCode;
    double  _endTime;
    NSError * _fatalError;
    bool  _hasDeterminedSeriesVersion;
    bool  _hasDuration;
    bool  _hasFetchedAllData;
    bool  _hasFetchedData;
    long long  _index;
    bool  _isVersion1;
    double  _lastDatumTime;
    double  _lastFetchedDatumTime;
    struct ObjectIdentifier { 
        long long objectType; 
        unsigned long long identifier; 
    }  _objectIdentifier;
    long long  _persistentID;
    double  _previousEndTime;
    long long  _sourceID;
    double  _startTime;
    HDDatabaseTransaction * _transaction;
}

@property (nonatomic, readonly) long long HFDKey;
@property (nonatomic, readonly) unsigned char*UUIDBytesPtr;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long dataTypeCode;
@property (nonatomic, readonly) bool done;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) long long sourceID;
@property (nonatomic, readonly) double startTime;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)HFDKey;
- (unsigned char*)UUIDBytesPtr;
- (void)_unitTesting_addToBufferTimestamp:(double)arg1 value:(double)arg2 duration:(float)arg3 isLastDatum:(bool)arg4;
- (long long)compare:(id)arg1;
- (long long)count;
- (long long)dataTypeCode;
- (id)description;
- (bool)done;
- (double)endTime;
- (bool)enumerateDataToTime:(double)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)initWithTransaction:(id)arg1 persistentID:(long long)arg2 dataTypeCode:(long long)arg3 UUIDBytes:(unsigned char)arg4 startTime:(double)arg5 endTime:(double)arg6 count:(long long)arg7 sourceID:(long long)arg8 HFDKey:(long long)arg9 bufferSize:(unsigned long long)arg10;
- (double)nextDatumTime;
- (long long)persistentID;
- (bool)primeEnumeratorWithError:(id*)arg1;
- (long long)sourceID;
- (double)startTime;

@end
