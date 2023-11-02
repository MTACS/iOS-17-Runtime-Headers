
@interface MNTracePreparedStatement : NSObject {
    struct sqlite3 { } * _db;
    struct sqlite3_stmt { } * _preparedStatement;
}

+ (id)preparedStatementForTrace:(id)arg1 statement:(id)arg2 outError:(out id*)arg3;

- (bool)_prepareStatementForTrace:(id)arg1 statement:(id)arg2 outError:(out id*)arg3;
- (void)bind:(unsigned long long)arg1 data:(id)arg2;
- (void)bind:(unsigned long long)arg1 double:(double)arg2;
- (void)bind:(unsigned long long)arg1 int:(int)arg2;
- (void)bind:(unsigned long long)arg1 string:(id)arg2;
- (void)bindNull:(unsigned long long)arg1;
- (bool)clearBindings;
- (id)columnData:(unsigned long long)arg1;
- (double)columnDouble:(unsigned long long)arg1;
- (int)columnInt:(unsigned long long)arg1;
- (id)columnObjects:(unsigned long long)arg1 ofClasses:(id)arg2;
- (id)columnObjectsOld:(unsigned long long)arg1 ofClasses:(id)arg2;
- (id)columnString:(unsigned long long)arg1;
- (void)dealloc;
- (id)debugDescription;
- (bool)execute;
- (void)finalize;
- (id)init;
- (id)initForTrace:(id)arg1 statement:(id)arg2 outError:(out id*)arg3;
- (bool)reset;
- (bool)step;
- (bool)stepRow;

@end
