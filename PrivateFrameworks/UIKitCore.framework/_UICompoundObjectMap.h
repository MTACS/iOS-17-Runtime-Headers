
@interface _UICompoundObjectMap : NSObject {
    NSMutableDictionary * _mapTable;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)compoundObjectMap;

- (void).cxx_destruct;
- (void)addEntriesFromCompoundObjectMap:(id)arg1 keepingCurrentValues:(bool)arg2;
- (unsigned long long)count;
- (id)deepCopy;
- (id)description;
- (id)init;
- (void)performWithEach:(id /* block */)arg1;
- (void)removeAllMappings;
- (void)setValue:(id)arg1 forObject:(id)arg2 andProperty:(id)arg3;
- (id)valueForObject:(id)arg1 andProperty:(id)arg2;

@end
