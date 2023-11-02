
@protocol ICSearchIndexable <NSObject>

@required

- (NSArray *)authorsExcludingCurrentUser;
- (NSString *)contentIdentifier;
- (NSDate *)creationDate;
- (NSString *)dataSourceIdentifier;
- (bool)isDeletable;
- (bool)isHiddenFromSearch;
- (bool)isMovable;
- (NSManagedObjectContext *)managedObjectContext;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (NSString *)searchDomainIdentifier;
- (NSString *)searchIndexingIdentifier;
- (bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (CSSearchableItemAttributeSet *)searchableItemAttributeSet;
- (CSSearchableItemAttributeSet *)userActivityContentAttributeSet;
- (long long)visibilityTestingType;

@optional

- (NSSet *)additionalSearchIndexablesForChangedKeys:(NSSet *)arg1;
- (NSData *)dataForTypeIdentifier:(NSString *)arg1;
- (NSURL *)fileURLForTypeIdentifier:(NSString *)arg1;
- (CSSearchableItemAttributeSet *)searchableItemViewAttributeSet;

@end
