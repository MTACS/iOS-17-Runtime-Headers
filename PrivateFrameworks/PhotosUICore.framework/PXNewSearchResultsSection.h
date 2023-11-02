
@interface PXNewSearchResultsSection : NSObject {
    bool  _expanded;
    NSString * _identifier;
    NSDictionary * _identifierToResultMap;
    NSArray * _results;
    NSString * _title;
    unsigned long long  _type;
    NSArray * _visibleResultIdentifiers;
}

@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSDictionary *identifierToResultMap;
@property (nonatomic, readonly) bool isExpandable;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, copy) NSArray *visibleResultIdentifiers;

- (void).cxx_destruct;
- (unsigned long long)_collapsedVisibleResultCount;
- (unsigned long long)_expandedVisibleResultCount;
- (id)_identifierToResultMapWithResults:(id)arg1;
- (id)_identifiersForResults:(id)arg1;
- (unsigned long long)_sortOrder;
- (id)_stringForType:(unsigned long long)arg1;
- (id)_titleForSectionType:(unsigned long long)arg1;
- (void)_updateVisibleResultIdentifiers;
- (long long)compare:(id)arg1;
- (id)description;
- (id)identifier;
- (id)identifierToResultMap;
- (id)initWithType:(unsigned long long)arg1 results:(id)arg2;
- (bool)isExpandable;
- (bool)isExpanded;
- (id)results;
- (id)searchResultForIdentifier:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setIdentifierToResultMap:(id)arg1;
- (void)setVisibleResultIdentifiers:(id)arg1;
- (id)title;
- (unsigned long long)type;
- (id)visibleResultIdentifiers;

@end
