
@protocol ICNoteVisibilityTesting <NSObject>

@required

- (NSPredicate *)predicateForSearchableAttachments;
- (NSPredicate *)predicateForSearchableNotes;
- (bool)supportsVisibilityTestingType:(long long)arg1;

@end
