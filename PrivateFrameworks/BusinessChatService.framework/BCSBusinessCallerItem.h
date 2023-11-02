
@interface BCSBusinessCallerItem : BCSItem <NSCopying, NSSecureCoding> {
    NSString * _department;
    BCSBusinessCallerItemIdentifier * _identifier;
    NSURL * _logoURL;
    NSString * _name;
    NSString * _phoneNumber;
}

@property (nonatomic, readonly, copy) NSString *department;
@property (nonatomic, readonly) BCSBusinessCallerItemIdentifier *identifier;
@property (nonatomic, readonly, copy) NSURL *logoURL;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *phoneNumber;

+ (id)itemFromStatement:(struct sqlite3_stmt { }*)arg1;
+ (id)itemsFromRecords:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)department;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCallerIdMessage:(id)arg1 bucketID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 name:(id)arg2 department:(id)arg3 logoURL:(id)arg4;
- (id)initWithPhoneNumber:(id)arg1 phoneHash:(long long)arg2 name:(id)arg3 department:(id)arg4 logoURL:(id)arg5;
- (id)itemIdentifier;
- (id)logoURL;
- (bool)matchesItemIdentifying:(id)arg1;
- (id)name;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (long long)truncatedHash;
- (long long)type;
- (void)updateStatementValues:(struct sqlite3_stmt { }*)arg1 withItemIdentifier:(id)arg2;

@end
