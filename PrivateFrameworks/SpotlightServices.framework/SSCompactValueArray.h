
@interface SSCompactValueArray : NSObject {
    NSIndexSet * _indexes;
    NSArray * _objects;
}

+ (id)decodeFromDictionary:(id)arg1 nesting:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)init;

@end
