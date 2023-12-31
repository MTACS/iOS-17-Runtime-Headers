
@interface ICNoteAllAccountVisibilityTesting : NSObject <ICNoteVisibilityTesting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (bool)supportsVisibilityTestingType:(long long)arg1;

@end
