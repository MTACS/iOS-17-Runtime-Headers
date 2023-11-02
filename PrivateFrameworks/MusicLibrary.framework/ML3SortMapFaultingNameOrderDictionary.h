
@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary {
    ML3DatabaseConnection * _connection;
    NSMutableDictionary * _dirtyInserts;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
