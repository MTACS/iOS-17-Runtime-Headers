
@interface LNActionDescriptionMetadata : NSObject <NSCopying, NSSecureCoding> {
    LNDisplayRepresentation * _categoryName;
    LNStaticDeferredLocalizedString * _descriptionText;
    LNStaticDeferredLocalizedString * _resultValueName;
    NSArray * _searchKeywords;
}

@property (nonatomic, readonly, copy) LNDisplayRepresentation *categoryName;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *descriptionText;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *resultValueName;
@property (nonatomic, readonly, copy) NSArray *searchKeywords;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categoryName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptionText:(id)arg1 categoryName:(id)arg2 searchKeywords:(id)arg3;
- (id)initWithDescriptionText:(id)arg1 categoryName:(id)arg2 searchKeywords:(id)arg3 resultValueName:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)resultValueName;
- (id)searchKeywords;

@end
