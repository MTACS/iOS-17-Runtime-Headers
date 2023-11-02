
@interface CKVSearchCriteria : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _fieldTypeFilters;
    NSSet * _itemTypeFilters;
    NSSet * _originAppIdFilters;
    unsigned char  _searchMode;
    NSArray * _searchTerms;
}

@property (nonatomic, readonly) NSSet *fieldTypeFilters;
@property (nonatomic, readonly) NSSet *itemTypeFilters;
@property (nonatomic, readonly) NSSet *originAppIdFilters;
@property (nonatomic, readonly) unsigned char searchMode;
@property (nonatomic, readonly) NSArray *searchTerms;

+ (id)builderWithLikeTerms:(id)arg1;
+ (id)builderWithMatchTerm:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_commandCriterionFromFieldTypeFilters;
- (id)_commandCriterionFromOriginAppFilters;
- (id)_commandCriterionFromVocabularyItemTypeFilters;
- (id)commandCriteriaFromFilters;
- (id)commandCriteriaFromSearchTerms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldTypeFilters;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchTerms:(id)arg1 searchMode:(unsigned char)arg2 originAppIdFilters:(id)arg3 fieldTypeFilters:(id)arg4 itemTypeFilters:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSearchCriteria:(id)arg1;
- (id)itemTypeFilters;
- (id)originAppIdFilters;
- (unsigned char)searchMode;
- (id)searchTerms;

@end
