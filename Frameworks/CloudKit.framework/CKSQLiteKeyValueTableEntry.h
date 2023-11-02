
@interface CKSQLiteKeyValueTableEntry : CKSQLiteTableEntry {
    NSUUID * _UUID;
    NSData * _data;
    NSDate * _date;
    NSString * _key;
    NSNumber * _number;
    NSObject<NSCoding> * _object;
    NSNumber * _scope;
    NSString * _scopeIdentifier;
    NSString * _string;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSNumber *number;
@property (nonatomic, retain) NSObject<NSCoding> *object;
@property (nonatomic, retain) NSNumber *scope;
@property (nonatomic, retain) NSString *scopeIdentifier;
@property (nonatomic, retain) NSString *string;

- (void).cxx_destruct;
- (id)UUID;
- (id)data;
- (id)date;
- (id)key;
- (id)number;
- (id)object;
- (id)scope;
- (id)scopeIdentifier;
- (void)setData:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setNumber:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setScope:(id)arg1;
- (void)setScopeIdentifier:(id)arg1;
- (void)setString:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)string;

@end
