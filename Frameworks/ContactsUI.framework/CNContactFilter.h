
@interface CNContactFilter : NSObject <NSCopying> {
    NSString * _fullTextString;
    bool  _rankSortedResults;
}

@property (nonatomic, copy) NSString *fullTextString;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic) bool rankSortedResults;
@property (nonatomic, readonly) bool supportsSections;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fullTextString;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (bool)rankSortedResults;
- (void)setFullTextString:(id)arg1;
- (void)setRankSortedResults:(bool)arg1;
- (bool)supportsSections;

@end
