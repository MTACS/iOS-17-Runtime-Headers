
@interface ICMoveDecision : NSObject {
    NSMutableSet * _accountsOfHTMLSourceObjects;
    NSMutableSet * _accountsOfModernSourceObjects;
    unsigned long long  _additionalStep;
    bool  _allowsManagedToUnmanagedMove;
    bool  _allowsUnmanagedToManagedMove;
    NSMutableSet * _filteredModernSourceObjects;
    NSArray * _guiltyObjects;
    bool  _hasLockedNotesNotFromDestinationAccountInSource;
    bool  _hasSanitizedAndScreenedModernSourceObjects;
    bool  _hasSharedObjectsNotFromDestinationAccountInSource;
    bool  _hasSystemPaperNotesNotFromDestinationAccountInSource;
    bool  _hasTrashedSystemPaperNotesInSource;
    NoteStoreObject * _htmlDestinationFolder;
    NSArray * _htmlSourceObjects;
    NSMutableArray * _joinedSharedRootObjectsInSource;
    NSMutableArray * _lockedObjectsInSource;
    ICCloudSyncingObject * _modernDestination;
    NSArray * _modernFoldersInSource;
    NSArray * _modernSourceObjects;
    NSMutableArray * _nonSystemPaperNotesInSource;
    NSMutableArray * _ownedSharedRootObjectsInSource;
    NSMutableArray * _privateModernNoteWithAttachmentsInSource;
    NSMutableArray * _readOnlySharedSubObjectsInSource;
    NSMutableArray * _readWriteSharedSubObjectsInSource;
    NSMutableArray * _sanitizedFilteredModernSourceObjects;
    NSMutableArray * _sharedObjectsInSource;
    NSMutableArray * _sharedObjectsNotFromDestinationFolderInSource;
    NSMutableArray * _systemPaperNotesInSource;
    unsigned long long  _type;
    NSMutableArray * _unsupportedObjectsInSource;
    ICVirtualSmartFolderItemIdentifier * _virtualDestinationFolder;
}

@property (nonatomic, retain) NSMutableSet *accountsOfHTMLSourceObjects;
@property (nonatomic, retain) NSMutableSet *accountsOfModernSourceObjects;
@property (nonatomic, readonly) unsigned long long additionalStep;
@property (nonatomic) bool allowsManagedToUnmanagedMove;
@property (nonatomic) bool allowsUnmanagedToManagedMove;
@property (nonatomic, retain) NSMutableSet *filteredModernSourceObjects;
@property (nonatomic, readonly) NSArray *guiltyObjects;
@property (nonatomic) bool hasLockedNotesNotFromDestinationAccountInSource;
@property (nonatomic) bool hasSanitizedAndScreenedModernSourceObjects;
@property (nonatomic) bool hasSharedObjectsNotFromDestinationAccountInSource;
@property (nonatomic) bool hasSystemPaperNotesNotFromDestinationAccountInSource;
@property (nonatomic) bool hasTrashedSystemPaperNotesInSource;
@property (nonatomic, readonly) NoteStoreObject *htmlDestinationFolder;
@property (nonatomic, readonly) NSArray *htmlSourceObjects;
@property (nonatomic, retain) NSMutableArray *joinedSharedRootObjectsInSource;
@property (nonatomic, retain) NSMutableArray *lockedObjectsInSource;
@property (nonatomic, readonly) ICCloudSyncingObject *modernDestination;
@property (nonatomic, readonly) ICAccount *modernDestinationAccount;
@property (nonatomic, readonly) ICFolder *modernDestinationFolder;
@property (nonatomic, retain) NSArray *modernFoldersInSource;
@property (nonatomic, readonly) NSArray *modernSourceObjects;
@property (nonatomic, retain) NSMutableArray *nonSystemPaperNotesInSource;
@property (nonatomic, retain) NSMutableArray *ownedSharedRootObjectsInSource;
@property (nonatomic, retain) NSMutableArray *privateModernNoteWithAttachmentsInSource;
@property (nonatomic, retain) NSMutableArray *readOnlySharedSubObjectsInSource;
@property (nonatomic, retain) NSMutableArray *readWriteSharedSubObjectsInSource;
@property (nonatomic, retain) NSMutableArray *sanitizedFilteredModernSourceObjects;
@property (nonatomic, retain) NSMutableArray *sharedObjectsInSource;
@property (nonatomic, retain) NSMutableArray *sharedObjectsNotFromDestinationFolderInSource;
@property (nonatomic, readonly) bool shouldContinueDecisionMaking;
@property (nonatomic, readonly) bool shouldMove;
@property (nonatomic, readonly) bool shouldProceed;
@property (nonatomic, retain) NSMutableArray *systemPaperNotesInSource;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, retain) NSMutableArray *unsupportedObjectsInSource;
@property (nonatomic, readonly) ICVirtualSmartFolderItemIdentifier *virtualDestinationFolder;

+ (bool)isValidHTMLDestinationObject:(id)arg1;
+ (bool)isValidHTMLSourceObject:(id)arg1;
+ (bool)isValidModernDestinationObject:(id)arg1;
+ (bool)isValidModernSourceObject:(id)arg1;
+ (bool)isValidVirtualDestinationObject:(id)arg1;
+ (id)objectsForMakingDecisionForNonSharedFolder:(id)arg1;
+ (bool)shouldCopyThenDeleteWhenMovingObject:(id)arg1 toNoteContainer:(id)arg2;

- (void).cxx_destruct;
- (void)_makeDecisionForMovingBetweenManagedAndUnmanagedAccounts;
- (void)_makeDecisionForMovingHTMLObjectsToHTMLDestination;
- (void)_makeDecisionForMovingHTMLObjectsToModernDestination;
- (void)_makeDecisionForMovingHTMLObjectsToVirtualDestination;
- (void)_makeDecisionForMovingModernObjectsToHTMLDestination;
- (void)_makeDecisionForMovingModernObjectsToModernDestination;
- (void)_makeDecisionForMovingModernObjectsToVirtualDestination;
- (void)_sanitizeAndScreenFilteredModernSourceObjectsIfNecessary;
- (void)_setDecisionWithType:(unsigned long long)arg1 additionalStep:(unsigned long long)arg2 guiltyObjects:(id)arg3;
- (void)_setDecisionWithType:(unsigned long long)arg1 guiltyObjects:(id)arg2;
- (id)accountForObject:(id)arg1;
- (id)accountsOfHTMLSourceObjects;
- (id)accountsOfModernSourceObjects;
- (unsigned long long)additionalStep;
- (bool)allowsManagedToUnmanagedMove;
- (bool)allowsUnmanagedToManagedMove;
- (id)description;
- (id)filteredModernSourceObjects;
- (id)guiltyObjects;
- (bool)hasLockedNotesNotFromDestinationAccountInSource;
- (bool)hasLockedObjects;
- (bool)hasSanitizedAndScreenedModernSourceObjects;
- (bool)hasSharedObjectsNotFromDestinationAccountInSource;
- (bool)hasSystemPaperNotesNotFromDestinationAccountInSource;
- (bool)hasTrashedSystemPaperNotesInSource;
- (id)htmlAccountForObject:(id)arg1;
- (id)htmlDestinationFolder;
- (id)htmlSourceObjects;
- (id)initWithSourceObjects:(id)arg1 destination:(id)arg2;
- (id)initWithSourceObjects:(id)arg1 destination:(id)arg2 allowsManagedToUnmanagedMove:(bool)arg3 allowsUnmanagedToManagedMove:(bool)arg4;
- (id)joinedSharedRootObjectsInSource;
- (id)lockedObjectsInSource;
- (id)modernDestination;
- (id)modernDestinationAccount;
- (id)modernDestinationFolder;
- (id)modernFoldersInSource;
- (id)modernSourceObjects;
- (id)nonSystemPaperNotesInSource;
- (id)ownedSharedRootObjectsInSource;
- (id)privateModernNoteWithAttachmentsInSource;
- (id)readOnlySharedSubObjectsInSource;
- (id)readWriteSharedSubObjectsInSource;
- (id)sanitizedFilteredModernSourceObjects;
- (void)setAccountsOfHTMLSourceObjects:(id)arg1;
- (void)setAccountsOfModernSourceObjects:(id)arg1;
- (void)setAllowsManagedToUnmanagedMove:(bool)arg1;
- (void)setAllowsUnmanagedToManagedMove:(bool)arg1;
- (void)setFilteredModernSourceObjects:(id)arg1;
- (void)setHasLockedNotesNotFromDestinationAccountInSource:(bool)arg1;
- (void)setHasSanitizedAndScreenedModernSourceObjects:(bool)arg1;
- (void)setHasSharedObjectsNotFromDestinationAccountInSource:(bool)arg1;
- (void)setHasSystemPaperNotesNotFromDestinationAccountInSource:(bool)arg1;
- (void)setHasTrashedSystemPaperNotesInSource:(bool)arg1;
- (void)setJoinedSharedRootObjectsInSource:(id)arg1;
- (void)setLockedObjectsInSource:(id)arg1;
- (void)setModernFoldersInSource:(id)arg1;
- (void)setNonSystemPaperNotesInSource:(id)arg1;
- (void)setOwnedSharedRootObjectsInSource:(id)arg1;
- (void)setPrivateModernNoteWithAttachmentsInSource:(id)arg1;
- (void)setReadOnlySharedSubObjectsInSource:(id)arg1;
- (void)setReadWriteSharedSubObjectsInSource:(id)arg1;
- (void)setSanitizedFilteredModernSourceObjects:(id)arg1;
- (void)setSharedObjectsInSource:(id)arg1;
- (void)setSharedObjectsNotFromDestinationFolderInSource:(id)arg1;
- (void)setSystemPaperNotesInSource:(id)arg1;
- (void)setUnsupportedObjectsInSource:(id)arg1;
- (id)sharedObjectsInSource;
- (id)sharedObjectsNotFromDestinationFolderInSource;
- (bool)shouldContinueDecisionMaking;
- (bool)shouldMove;
- (bool)shouldProceed;
- (id)systemPaperNotesInSource;
- (unsigned long long)type;
- (id)typeString;
- (id)unsupportedObjectsInSource;
- (id)virtualDestinationFolder;

@end