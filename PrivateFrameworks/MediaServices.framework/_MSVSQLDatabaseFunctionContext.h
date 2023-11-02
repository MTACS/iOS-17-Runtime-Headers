
@interface _MSVSQLDatabaseFunctionContext : NSObject <NSObject> {
    int  _argc;
    struct sqlite3_value {} ** _argv;
    struct sqlite3_context { } * _context;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfArguments;
@property (readonly) Class superclass;

- (struct sqlite3_value { }*)_valueAtIndex:(long long)arg1;
- (bool)boolValueAtArgumentIndex:(long long)arg1;
- (id)dataValueAtArgumentIndex:(long long)arg1;
- (id)dateValueAtArgumentIndex:(long long)arg1;
- (double)doubleValueAtArgumentIndex:(long long)arg1;
- (float)floatValueAtArgumentIndex:(long long)arg1;
- (id)functionContextOfClass:(Class)arg1 atArgumentIndex:(long long)arg2;
- (long long)int64ValueAtArgumentIndex:(long long)arg1;
- (bool)isNullValueAtArgumentIndex:(long long)arg1;
- (id)jsonDataAtArgumentIndex:(long long)arg1;
- (id)jsonValueAtArgumentIndex:(long long)arg1 error:(id*)arg2;
- (void)memoizeObject:(id)arg1 forArgumentIndex:(long long)arg2;
- (id)memoizedObjectForArgumentIndex:(long long)arg1;
- (long long)numberOfArguments;
- (id)objectValueAtArgumentIndex:(long long)arg1;
- (id)returnBool:(bool)arg1;
- (id)returnData:(id)arg1;
- (id)returnDate:(id)arg1;
- (id)returnDouble:(double)arg1;
- (id)returnError:(id)arg1;
- (id)returnError:(id)arg1 sqliteCode:(int)arg2;
- (id)returnErrorNoMemory;
- (id)returnErrorTooBig;
- (id)returnFloat:(float)arg1;
- (id)returnFunctionContext:(id)arg1;
- (id)returnInt64:(long long)arg1;
- (id)returnJSON:(id)arg1 error:(id*)arg2;
- (id)returnNull;
- (id)returnString:(id)arg1;
- (id)returnUInt64:(unsigned long long)arg1;
- (id)stringValueAtArgumentIndex:(long long)arg1;
- (unsigned long long)uint64ValueAtArgumentIndex:(long long)arg1;

@end
