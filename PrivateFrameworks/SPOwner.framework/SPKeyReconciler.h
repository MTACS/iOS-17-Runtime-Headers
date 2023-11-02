
@interface SPKeyReconciler : NSObject {
    NSDictionary * _backingDictionary;
    NSMutableArray * _keyIndices;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)reconcileKey:(id)arg1 matchedIndex:(unsigned int*)arg2 sequence:(unsigned char*)arg3 error:(unsigned char*)arg4;

@end
