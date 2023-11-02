
@interface AMSSQLiteStatement : NSObject <AMSSQLiteBinding> {
    AMSSQLiteConnection * _connection;
    struct sqlite3_stmt { } * _statement;
    AMSSQLiteStatement * _strongSelf;
}

@property (nonatomic, readonly, copy) NSString *SQL;
@property (nonatomic, readonly, copy) NSDictionary *columnIndexByName;
@property (nonatomic, readonly) AMSSQLiteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;
@property (nonatomic, readonly) struct sqlite3_stmt { }*sqlite3_stmt;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)SQL;
- (void)bindArray:(id)arg1 atPosition:(int)arg2;
- (void)bindData:(id)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindDate:(id)arg1 atPosition:(int)arg2;
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindNullableString:(id)arg1 atPosition:(int)arg2;
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;
- (void)bindString:(id)arg1 atPosition:(int)arg2;
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindURL:(id)arg1 atPosition:(int)arg2;
- (int)clearBindings;
- (id)columnIndexByName;
- (id)connection;
- (int)finalizeStatement;
- (id)initWithStatement:(struct sqlite3_stmt { }*)arg1 onConnection:(id)arg2;
- (bool)isReadOnly;
- (int)reset;
- (struct sqlite3_stmt { }*)sqlite3_stmt;
- (int)step;

@end
