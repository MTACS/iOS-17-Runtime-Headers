
@interface NSManagedObjectID : NSObject <NSCopying, NSFetchRequestResult, RCRecordingsFolderIdentifier>

@property (nonatomic, readonly) long long __rc_folderType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSEntityDescription *entity;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hmd_debugIdentifier;
@property (nonatomic, readonly) Class ic_entityClass;
@property (nonatomic, readonly) bool ic_isAccountType;
@property (nonatomic, readonly) bool ic_isAttachmentType;
@property (nonatomic, readonly) bool ic_isBaseAttachmentType;
@property (nonatomic, readonly) bool ic_isContainerType;
@property (nonatomic, readonly) bool ic_isFolderType;
@property (nonatomic, readonly) bool ic_isHashtagType;
@property (nonatomic, readonly) bool ic_isInlineAttachmentType;
@property (nonatomic, readonly) bool ic_isInvitationType;
@property (nonatomic, readonly) bool ic_isLegacyAccountType;
@property (nonatomic, readonly) bool ic_isLegacyContainerType;
@property (nonatomic, readonly) bool ic_isLegacyFolderType;
@property (nonatomic, readonly) bool ic_isLegacyNoteType;
@property (nonatomic, readonly) bool ic_isLegacyType;
@property (nonatomic, readonly) bool ic_isModernAccountProxyType;
@property (nonatomic, readonly) bool ic_isModernAccountType;
@property (nonatomic, readonly) bool ic_isModernContainerType;
@property (nonatomic, readonly) bool ic_isModernFolderType;
@property (nonatomic, readonly) bool ic_isModernNoteType;
@property (nonatomic, readonly) bool ic_isModernType;
@property (nonatomic, readonly) bool ic_isNoteType;
@property (nonatomic, readonly) NSString *ic_uriString;
@property (readonly) NSPersistentStore *persistentStore;
@property (readonly) Class superclass;
@property (getter=isTemporaryID, readonly) bool temporaryID;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (id)_generateTemporaryIDForEntity:(id)arg1;
+ (bool)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (long long)version;

- (id)URIRepresentation;
- (bool)_isDeallocating;
- (bool)_isPersistentStoreAlive;
- (bool)_preferReferenceData64;
- (id)_referenceData;
- (long long)_referenceData64;
- (id)_retainedURIString;
- (id)_storeIdentifier;
- (int)_temporaryIDCounter;
- (bool)_tryRetain;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)entity;
- (id)entityName;
- (id)initWithObject:(id)arg1;
- (id)initWithPK64:(long long)arg1;
- (bool)isTemporaryID;
- (id)persistentStore;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)hmd_debugIdentifier;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (bool)ic_isAccountType;
- (bool)ic_isAttachmentType;
- (bool)ic_isBaseAttachmentType;
- (bool)ic_isContainerType;
- (bool)ic_isFolderType;
- (bool)ic_isHashtagType;
- (bool)ic_isInlineAttachmentType;
- (bool)ic_isInvitationType;
- (bool)ic_isLegacyAccountType;
- (bool)ic_isLegacyContainerType;
- (bool)ic_isLegacyFolderType;
- (bool)ic_isLegacyNoteType;
- (bool)ic_isLegacyType;
- (bool)ic_isModernAccountProxyType;
- (bool)ic_isModernAccountType;
- (bool)ic_isModernContainerType;
- (bool)ic_isModernFolderType;
- (bool)ic_isModernNoteType;
- (bool)ic_isModernType;
- (bool)ic_isNoteType;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (Class)ic_entityClass;
- (bool)ic_isEntityOfClass:(Class)arg1;
- (id)ic_uriString;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)pl_shortURI;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (long long)__rc_folderType;

@end
