
@interface CKVDatabaseValueRow : NSObject {
    NSArray * _databaseValueArray;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)dataValueAtColumnIndex:(unsigned long long)arg1;
- (id)description;
- (id)init;
- (id)initWithDatabaseValueArray:(id)arg1;
- (id)numberValueAtColumnIndex:(unsigned long long)arg1;
- (id)stringValueAtColumnIndex:(unsigned long long)arg1;

@end
