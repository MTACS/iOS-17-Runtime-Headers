
@interface HKSignedClinicalDataParsingResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _items;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly) unsigned long long options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithItems:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1 options:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)items;
- (unsigned long long)options;

@end
