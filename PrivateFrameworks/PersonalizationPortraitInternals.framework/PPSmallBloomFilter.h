
@interface PPSmallBloomFilter : NSObject <MLCustomModel> {
    _PASBloomFilter * _bloomFilter;
    NSString * _inputName;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSString * _outputName;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
