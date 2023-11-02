
@interface PXSearchNavigationAttributes : NSObject {
    NSString * _completionKey;
    NSArray * _searchCategories;
    NSArray * _searchTerms;
    NSString * _searchText;
}

@property (nonatomic, readonly) NSString *completionKey;
@property (nonatomic, readonly) NSArray *searchCategories;
@property (nonatomic, readonly) NSArray *searchTerms;
@property (nonatomic, readonly) NSString *searchText;

+ (id)attributesForURLComponents:(id)arg1;
+ (id)attributesWithGenericSearchTerm:(id)arg1;
+ (id)attributesWithGenericSearchText:(id)arg1;

- (void).cxx_destruct;
- (id)completionKey;
- (id)searchCategories;
- (id)searchTerms;
- (id)searchText;

@end
