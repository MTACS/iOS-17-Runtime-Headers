
@interface HDExtractionResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _items;
}

@property (nonatomic, readonly, copy) NSArray *allUnits;
@property (nonatomic, readonly, copy) NSArray *items;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allUnits;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;

@end
