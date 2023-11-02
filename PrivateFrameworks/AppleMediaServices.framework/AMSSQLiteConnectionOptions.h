
@interface AMSSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding> {
    long long  _cacheSize;
    NSString * _databasePath;
    NSString * _protectionType;
    bool  _readOnly;
}

@property (nonatomic) long long cacheSize;
@property (nonatomic, copy) NSString *databasePath;
@property (nonatomic, copy) NSString *protectionType;
@property (getter=isReadOnly, nonatomic) bool readOnly;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)applyToDatabase:(struct sqlite3 { }*)arg1;
- (long long)cacheSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databasePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabasePath:(id)arg1;
- (bool)isReadOnly;
- (id)protectionType;
- (void)setCacheSize:(long long)arg1;
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1;
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;
- (void)setDatabasePath:(id)arg1;
- (void)setProtectionType:(id)arg1;
- (void)setReadOnly:(bool)arg1;

@end
