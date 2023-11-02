
@interface SSArchiveViewCardSection : SFArchiveViewCardSection <NSSecureCoding> {
    CSSearchableItemAttributeSet * _attributeSet;
    bool  _isTopHit;
    NSString * _searchString;
}

@property (nonatomic, retain) CSSearchableItemAttributeSet *attributeSet;
@property (nonatomic) bool isTopHit;
@property (nonatomic, copy) NSString *searchString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeSet;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isTopHit;
- (id)searchString;
- (void)setAttributeSet:(id)arg1;
- (void)setIsTopHit:(bool)arg1;
- (void)setSearchString:(id)arg1;

@end
