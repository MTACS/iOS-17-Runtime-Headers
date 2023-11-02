
@interface EFSQLColumn : NSObject {
    long long  _index;
    struct sqlite3_stmt { } * _statement;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly, copy) NSData *dataValue;
@property (nonatomic, readonly) long long databaseIDValue;
@property (nonatomic, readonly) NSDate *dateValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly, copy) id objectValue;
@property (nonatomic, readonly) struct sqlite3_stmt { }*statement;
@property (nonatomic, readonly, copy) NSString *stringValue;

- (bool)boolValue;
- (id)dataValue;
- (long long)databaseIDValue;
- (id)dateValue;
- (id)debugDescription;
- (double)doubleValue;
- (long long)index;
- (id)initWithPreparedStatement:(id)arg1 index:(long long)arg2;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt { }*)arg1 index:(long long)arg2;
- (long long)int64Value;
- (long long)integerValue;
- (id)name;
- (id)numberValue;
- (id)objectValue;
- (struct sqlite3_stmt { }*)statement;
- (id)stringValue;

@end
