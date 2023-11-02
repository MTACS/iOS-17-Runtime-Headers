
@interface CNContactHandleIndexableString : NSObject <NSCopying, NSSecureCoding> {
    <_CNContactHandleStringEquivalenceStrategy> * _equivalenceStrategy;
    NSString * _indexKey;
    NSString * _stringValue;
}

@property (nonatomic, readonly) <_CNContactHandleStringEquivalenceStrategy> *equivalenceStrategy;
@property (nonatomic, readonly, copy) NSString *indexKey;
@property (nonatomic, readonly, copy) NSString *stringValue;

+ (id)emailIndexKey:(id)arg1;
+ (id)equivalenceStrategyWithString:(id)arg1;
+ (id)phoneNumberIndexKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalenceStrategy;
- (unsigned long long)hash;
- (id)indexKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullString:(id)arg1 indexKey:(id)arg2 equivalenceStrategy:(id)arg3;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToString:(id)arg1 strict:(bool*)arg2;
- (id)stringValue;

@end
