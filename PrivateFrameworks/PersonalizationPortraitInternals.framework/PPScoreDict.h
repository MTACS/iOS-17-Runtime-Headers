
@interface PPScoreDict : NSObject <MLFeatureProvider> {
    struct unique_ptr<std::vector<std::shared_ptr<std::vector<float>>>, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> { 
        struct __compressed_pair<std::vector<std::shared_ptr<std::vector<float>>> *, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> { 
            void *__value_; 
        } __ptr_; 
    }  _arrayValueStorage;
    NSMutableArray * _objectStorage;
    struct unique_ptr<std::vector<float>, std::default_delete<std::vector<float>>> { 
        struct __compressed_pair<std::vector<float> *, std::default_delete<std::vector<float>>> { 
            void *__value_; 
        } __ptr_; 
    }  _scalarValueStorage;
    PPBaseScoreInputSet * _scoreInputSet;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<std::vector<float>> { void *x1; struct __shared_weak_count {} *x2; })arraySharedPtrForIndex:(unsigned long long)arg1;
- (unsigned long long)arrayValueCount;
- (id)arrayValueDictionary;
- (id)arrayValueForIndex:(unsigned long long)arg1;
- (id)description;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)init;
- (id)initWithScalarValueCount:(unsigned long long)arg1 arrayValueCount:(unsigned long long)arg2 objectCount:(unsigned long long)arg3;
- (id)initWithScoreInputSet:(id)arg1;
- (unsigned long long)objectCount;
- (id)objectDictionary;
- (id)objectForIndex:(unsigned long long)arg1;
- (unsigned long long)scalarValueCount;
- (id)scalarValueDictionary;
- (float)scalarValueForIndex:(unsigned long long)arg1;
- (void)setArraySharedPtr:(struct shared_ptr<std::vector<float>> { void *x1; struct __shared_weak_count {} *x2; })arg1 forIndex:(unsigned long long)arg2;
- (void)setArrayStorage:(void*)arg1 forIndex:(unsigned long long)arg2;
- (void)setArrayValue:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setScalarValue:(float)arg1 forIndex:(unsigned long long)arg2;

@end
