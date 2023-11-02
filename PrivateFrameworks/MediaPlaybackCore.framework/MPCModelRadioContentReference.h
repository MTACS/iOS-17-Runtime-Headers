
@interface MPCModelRadioContentReference : NSObject <NSCopying, NSSecureCoding> {
    ICRadioContentReference * _ICRadioContentReference;
    MPIdentifierSet * _referenceModelObjectIdentifiers;
}

@property (nonatomic, readonly) ICRadioContentReference *ICRadioContentReference;
@property (nonatomic, readonly) MPIdentifierSet *referenceModelObjectIdentifiers;

+ (id)referenceWithMPModelObject:(id)arg1;
+ (id)referenceWithMPModelObject:(id)arg1 containerModelPlayEvent:(id)arg2;
+ (id)referenceWithStoreIdentifier:(id)arg1 trackInfo:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ICRadioContentReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithICRadioContentReference:(id)arg1;
- (id)referenceModelObjectIdentifiers;

@end
