
@interface LNTypeDisplayRepresentation : NSObject <NSCopying, NSSecureCoding> {
    LNStaticDeferredLocalizedString * _name;
    LNStaticDeferredLocalizedString * _numericFormat;
    NSArray * _synonyms;
}

@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *name;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *numericFormat;
@property (nonatomic, readonly, copy) NSArray *synonyms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 numericFormat:(id)arg2;
- (id)initWithName:(id)arg1 numericFormat:(id)arg2 synonyms:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)numericFormat;
- (id)synonyms;

@end
