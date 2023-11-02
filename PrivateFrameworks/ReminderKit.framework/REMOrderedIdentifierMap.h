
@interface REMOrderedIdentifierMap : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _orderedIdentifiers;
}

@property (nonatomic, retain) NSArray *orderedIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrderedIdentifiers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)orderedIdentifiers;
- (void)setOrderedIdentifiers:(id)arg1;

@end
