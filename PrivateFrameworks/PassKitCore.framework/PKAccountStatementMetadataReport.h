
@interface PKAccountStatementMetadataReport : PKAccountReport <NSCopying, NSSecureCoding> {
    NSDate * _closingDate;
    NSArray * _items;
    NSDate * _openingDate;
    NSString * _statementIdentifier;
}

@property (nonatomic, readonly, copy) NSDate *closingDate;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSDate *openingDate;
@property (nonatomic, readonly, copy) NSString *statementIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)closingDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1 accountIdentifier:(id)arg2 statementIdentifier:(id)arg3 openingDate:(id)arg4 closingDate:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)openingDate;
- (id)statementIdentifier;

@end
