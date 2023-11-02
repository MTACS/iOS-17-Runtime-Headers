
@interface MLProbabilityDictionary : NSDictionary {
    MLProbabilityDictionarySharedKeySet * _labelIndexMap;
    <MLProbabilityDictionaryStorage> * _storage;
}

@property (readonly) MLProbabilityDictionarySharedKeySet *labelIndexMap;
@property (readonly) <MLProbabilityDictionaryStorage> *storage;

+ (id)sharedKeySetForLabels:(id)arg1;

- (void).cxx_destruct;
- (id)classLabelOfMaxProbability;
- (unsigned long long)count;
- (id)initWithLabelIndexMap:(id)arg1 storage:(id)arg2;
- (id)initWithLabels:(id)arg1 probabilities:(const double*)arg2;
- (id)initWithLabels:(id)arg1 probabilityArray:(id)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithSharedKeySet:(id)arg1 probabilities:(const double*)arg2;
- (id)initWithSharedKeySet:(id)arg1 probabilityArray:(id)arg2;
- (id)initWithSharedKeySet:(id)arg1 probabilityMultiArray:(id)arg2;
- (id)keyEnumerator;
- (id)labelIndexMap;
- (id)objectForKey:(id)arg1;
- (id)storage;

@end
