
@interface AFDictionarySchema : NSObject {
    NSMutableDictionary * _coercions;
}

- (void).cxx_destruct;
- (id)coerceObject:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)setObjectCoercion:(id)arg1 forKey:(id)arg2;

@end
