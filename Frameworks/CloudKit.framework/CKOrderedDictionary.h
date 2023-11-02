
@interface CKOrderedDictionary : NSObject {
    NSMutableArray * tuples;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)orderedDictionary;
+ (id)orderedDictionaryWithCapacity:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentationRecursive:(bool)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
