
@interface PKAccountTransactionSyncReport : PKAccountReport <NSCopying, NSSecureCoding> {
    NSArray * _items;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_itemArrayRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1 accountIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
