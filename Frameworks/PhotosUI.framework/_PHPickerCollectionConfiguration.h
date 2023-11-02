
@interface _PHPickerCollectionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSArray * __identifiers;
    bool  _allowsEditingCollection;
    NSArray * _disabledIdentifiers;
    NSArray * _preselectedIdentifiers;
    NSString * _purpose;
    NSArray * _suggestedIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *_identifiers;
@property (nonatomic) bool allowsEditingCollection;
@property (nonatomic, copy) NSArray *disabledIdentifiers;
@property (nonatomic, copy) NSArray *preselectedIdentifiers;
@property (nonatomic, copy) NSString *purpose;
@property (nonatomic, copy) NSArray *suggestedIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifiers;
- (bool)allowsEditingCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disabledIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)preselectedIdentifiers;
- (id)purpose;
- (void)setAllowsEditingCollection:(bool)arg1;
- (void)setDisabledIdentifiers:(id)arg1;
- (void)setPreselectedIdentifiers:(id)arg1;
- (void)setPurpose:(id)arg1;
- (void)setSuggestedIdentifiers:(id)arg1;
- (id)suggestedIdentifiers;

@end
