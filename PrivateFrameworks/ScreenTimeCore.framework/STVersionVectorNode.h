
@interface STVersionVectorNode : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _count;
    NSString * _identifier;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (void)increment;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNode:(id)arg1;
- (void)join:(id)arg1;
- (void)setCount:(unsigned long long)arg1;

@end
