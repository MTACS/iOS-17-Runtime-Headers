
@interface PLAssetJournalEntryPayload : PLManagedObjectJournalEntryPayload {
    NSDictionary * _keywordUUIDRemapping;
}

@property (nonatomic, readonly) NSString *mediaGroupUUID;
@property (nonatomic, readonly) NSArray *resources;
@property (nonatomic, readonly) short savedAssetType;

+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)snapshotSortDescriptors;

- (void).cxx_destruct;
- (void)_convertCustomRenderedValueToHDRType;
- (void)_convertDepthStatesToDepthType;
- (void)_filterNonPersistedResources;
- (void)_fixAdjustedAssetUTI;
- (void)_fixDateCreatedSourceWithAdditionalAssetAttributes:(id)arg1;
- (void)_fixHDRGainZeroValueToNULL;
- (void)_fixLocationData;
- (void)_fixResourceTypeUnknownValues;
- (void)_fixXMPSidecarUTI;
- (id)_loadOriginalImageMetadataWithPathManager:(id)arg1 timezoneLookup:(id)arg2;
- (id)_loadOriginalVideoMetadataWithPathManager:(id)arg1 timezoneLookup:(id)arg2;
- (id)adjustmentFormatIdentifier;
- (id)adjustmentFormatVersion;
- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4;
- (unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
- (unsigned short)bundleScope;
- (id)cloudMasterGUID;
- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)dateCreated;
- (long long)dateCreatedSource;
- (id)directory;
- (id)extendedAttributesLatitude;
- (id)extendedAttributesLongitude;
- (id)filename;
- (bool)hasAdjustments;
- (id)hdrGain;
- (id)highFrameRateState;
- (id)initWithAdditionalAssetAttributes:(id)arg1 changedKeys:(id)arg2;
- (id)initWithAssetDescription:(id)arg1 changedKeys:(id)arg2;
- (id)initWithCloudMaster:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3;
- (id)initWithCloudMasterMediaMetadata:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3 modelProperties:(id)arg4;
- (id)initWithEditedIPTCAttributes:(id)arg1 changedKeys:(id)arg2;
- (id)initWithExtendedAttributes:(id)arg1 changedKeys:(id)arg2;
- (id)initWithInternalResource:(id)arg1 filesystemBookmark:(id)arg2 changedKeys:(id)arg3;
- (id)initWithUnmanagedAdjustment:(id)arg1 changedKeys:(id)arg2;
- (id)insertAssetFromDataInManagedObjectContext:(id)arg1 keywordUUIDRemapping:(id)arg2 rawPayloadAttributesToUpdate:(id)arg3;
- (bool)isDefaultAdjustedSlomo;
- (bool)isImage;
- (bool)isVideo;
- (short)kind;
- (short)kindSubtype;
- (id)latitude;
- (id)locationData;
- (id)longitude;
- (id)mediaGroupUUID;
- (void)mergePayload:(id)arg1;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)arg1;
- (id)originalOrientation;
- (id)originalResourceRelativePathsWithPathManager:(id)arg1;
- (id)originalUniformTypeIdentifier;
- (id)payloadValueFromAttributes:(id)arg1 forPayloadProperty:(id)arg2;
- (unsigned short)playbackStyle;
- (unsigned short)playbackVariation;
- (id)resources;
- (short)savedAssetType;
- (void)setDateCreatedSource:(long long)arg1;
- (void)setKind:(short)arg1;
- (void)setLocation:(id)arg1;
- (void)setPlaybackStyle:(unsigned short)arg1;
- (id)uniformTypeIdentifier;
- (bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;

@end
