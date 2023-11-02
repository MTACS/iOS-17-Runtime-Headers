
@interface PHShareParticipant : PHObject <PXSharedLibraryParticipant> {
    short  _acceptanceStatus;
    NSString * _emailAddress;
    short  _exitState;
    bool  _isCurrentUser;
    NSPersonNameComponents * _nameComponents;
    NSString * _participantID;
    short  _permission;
    NSString * _phoneNumber;
    unsigned short  _role;
}

@property (nonatomic, readonly) short acceptanceStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (nonatomic, readonly) short exitState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXSharedLibraryImageProvider> *imageProvider;
@property (nonatomic, readonly) bool isCurrentUser;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly, copy) NSString *participantID;
@property (nonatomic, readonly) short permission;
@property (nonatomic, readonly) <PXPerson> *person;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (nonatomic, readonly) unsigned short role;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)entityKeyMap;
+ (id)fetchContributorsForAsset:(id)arg1 options:(id)arg2;
+ (id)fetchContributorsForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchParticipantsInShare:(id)arg1 options:(id)arg2;
+ (id)fetchParticipantsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchShareParticipantForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 photoLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (short)acceptanceStatus;
- (Class)changeRequestClass;
- (id)emailAddress;
- (short)exitState;
- (unsigned long long)hash;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (id)nameComponents;
- (id)participantID;
- (short)permission;
- (id)phoneNumber;
- (unsigned short)role;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)imageProvider;
- (id)person;
- (long long)status;

@end
