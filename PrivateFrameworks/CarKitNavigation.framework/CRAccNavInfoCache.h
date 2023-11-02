
@interface CRAccNavInfoCache : NSObject <NSFastEnumeration> {
    NSMutableDictionary * _accNavInfo;
    unsigned long long  _countLimit;
}

@property (nonatomic, readonly) NSMutableDictionary *accNavInfo;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long countLimit;

- (void).cxx_destruct;
- (id)accNavInfo;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countLimit;
- (id)description;
- (id)indexes;
- (id)initWithCountLimit:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
