
@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllNotesContainer;
@property (readonly) Class superclass;

- (id)basicAccountIdentifier;
- (id)cacheKey;
- (id)collectionInfo;
- (bool)isAllNotesContainer;
- (bool)isTitleValid:(id)arg1 error:(id*)arg2;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)searchDomainIdentifier;
- (bool)supportsVisibilityTestingType:(long long)arg1;
- (id)titleForTableViewCell;

@end
