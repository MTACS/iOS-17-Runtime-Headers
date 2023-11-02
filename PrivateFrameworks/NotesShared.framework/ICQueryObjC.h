
@interface ICQueryObjC : NSObject {
    void entity;
    void type;
}

@property (nonatomic, readonly) bool canBeEdited;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly) NSPredicate *predicate;

+ (id)objc_queryForNonDeletedNotes;
+ (id)objc_queryForNotesMatchingFilterSelection:(id)arg1;
+ (id)objc_queryForNotesMatchingTagSelection:(id)arg1;
+ (id)objc_queryForPinnedNotes:(bool)arg1 allowsRecentlyDeleted:(bool)arg2;
+ (id)objc_queryForSharedNotes:(bool)arg1 allowsRecentlyDeleted:(bool)arg2;
+ (id)objc_queryForSystemPaperNotesAllowsRecentlyDeleted:(bool)arg1;

- (void).cxx_destruct;
- (bool)canBeEdited;
- (id)debugDescription;
- (id)entityName;
- (id)filterSelectionWithManagedObjectContext:(id)arg1 account:(id)arg2;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)minimumSupportedVersion;
- (id)predicate;
- (id)removingTagIdentifier:(id)arg1;
- (id)replacingTagIdentifier:(id)arg1 withNewTagIdentifier:(id)arg2;
- (id)tagSelectionWithManagedObjectContext:(id)arg1;

@end
