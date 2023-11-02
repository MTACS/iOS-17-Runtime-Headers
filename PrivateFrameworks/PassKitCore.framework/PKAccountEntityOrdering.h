
@interface PKAccountEntityOrdering : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _context;
    NSArray * _ordering;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long context;
@property (nonatomic, retain) NSArray *ordering;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 dictionary:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountEntityOrdering:(id)arg1;
- (id)ordering;
- (id)orderingAsJSONString;
- (void)setContext:(unsigned long long)arg1;
- (void)setOrdering:(id)arg1;
- (void)setOrderingFromJSONString:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
