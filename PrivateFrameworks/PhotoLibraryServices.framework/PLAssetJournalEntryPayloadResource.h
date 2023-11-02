
@interface PLAssetJournalEntryPayloadResource : NSObject <PLResourceIdentity> {
    PLManagedObjectJournalEntryPayload * _payload;
    NSDictionary * _payloadAttributes;
}

@property (nonatomic, readonly) NSData *bookmarkData;
@property (nonatomic, readonly) NSString *bookmarkPath;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, readonly) unsigned short dataStoreClassID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOriginalResource;
@property (nonatomic, readonly) NSDictionary *payloadAttributes;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) unsigned int resourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (nonatomic, readonly) NSString *uniformTypeIdentifierString;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) NSString *volumeUuidString;

+ (void)_applyLargeVideoRecipeRefactorFixToExternalResource:(id)arg1 withAsset:(id)arg2;
+ (bool)isValidForPersistenceWithRecipeID:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)appendToDescriptionBuilder:(id)arg1;
- (id)bookmarkData;
- (id)bookmarkPath;
- (unsigned long long)cplType;
- (unsigned short)dataStoreClassID;
- (id)description;
- (id)fourCharCodeName;
- (id)initWithPayloadAttributes:(id)arg1 payload:(id)arg2;
- (bool)isAdjusted;
- (bool)isEqualToPayloadResource:(id)arg1;
- (bool)isOriginalResource;
- (bool)isPrimaryResource;
- (bool)isReferenceResource;
- (bool)isValidForPersistence;
- (void)mergePayloadResource:(id)arg1 nilAttributes:(id)arg2;
- (id)payloadAttributes;
- (unsigned int)recipeID;
- (unsigned int)resourceType;
- (short)trashedState;
- (id)uniformTypeIdentifier;
- (id)uniformTypeIdentifierString;
- (void)updateStoredResource:(id)arg1;
- (id)validatedExternalResourceWithAsset:(id)arg1 isCPLEnabled:(bool)arg2;
- (unsigned int)version;
- (id)volumeUuidString;

@end
