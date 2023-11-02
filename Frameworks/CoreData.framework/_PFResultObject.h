
@interface _PFResultObject : NSDictionary {
    int  _cd_rc;
    unsigned int  _count;
    _PFResultArray * _parent_buffer;
    unsigned long long  _primary_key;
    unsigned long long  _sql_entity_id;
}

+ (Class)classForKeyedUnarchiver;

- (void)_setParentBuffer:(id)arg1;
- (Class)classForCoder;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)valueAtIndex:(unsigned long long)arg1;

@end
