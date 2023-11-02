
@interface ICQuery : NSObject

@property (nonatomic, readonly) bool canBeEdited;
@property (nonatomic, readonly, copy) NSString *entityName;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (readonly) ICQueryObjC *queryObjC;

+ (id)queryForNotesMatchingFilterSelection:(id)arg1;
+ (id)queryForNotesMatchingTagSelection:(id)arg1;
+ (id)queryForPinnedNotes:(bool)arg1 allowsRecentlyDeleted:(bool)arg2;
+ (id)queryForSharedNotes:(bool)arg1 allowsRecentlyDeleted:(bool)arg2;
+ (id)queryForSystemPaperNotesAllowsRecentlyDeleted:(bool)arg1;

- (bool)canBeEdited;
- (id)entityName;
- (id)filterSelectionWithManagedObjectContext:(id)arg1 account:(id)arg2;
- (long long)minimumSupportedVersion;
- (id)predicate;
- (id)queryObjC;
- (id)removingTagIdentifier:(id)arg1;
- (id)replacingTagIdentifier:(id)arg1 withNewTagIdentifier:(id)arg2;
- (id)tagSelectionWithManagedObjectContext:(id)arg1;

@end
