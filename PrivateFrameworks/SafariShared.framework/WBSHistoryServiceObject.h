
@interface WBSHistoryServiceObject : NSObject <NSSecureCoding> {
    long long  _databaseID;
}

@property (nonatomic, readonly) long long databaseID;

+ (bool)supportsSecureCoding;

- (long long)databaseID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabaseID:(long long)arg1;

@end
