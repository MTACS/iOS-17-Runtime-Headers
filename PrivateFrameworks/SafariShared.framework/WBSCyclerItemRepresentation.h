
@interface WBSCyclerItemRepresentation : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _extraAttributes;
    NSString * _symbolImageName;
    NSString * _title;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSDictionary *extraAttributes;
@property (nonatomic, copy) NSString *symbolImageName;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extraAttributes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 symbolImageName:(id)arg2 uniqueIdentifier:(id)arg3;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;
- (bool)isEquivalent:(id)arg1;
- (id)pairsOfItemsWithDifferingExtraAttributesComparedTo:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setSymbolImageName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)symbolImageName;
- (id)title;
- (id)uniqueIdentifier;

@end
