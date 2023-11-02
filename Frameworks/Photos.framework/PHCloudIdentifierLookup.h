
@interface PHCloudIdentifierLookup : NSObject {
    NSDictionary * _cloudIdentifierKeysByFetchType;
    NSArray * _cloudIdentifiers;
    NSMutableDictionary * _cloudIdentifiersByLocalIdentifiers;
    NSMutableDictionary * _localIdentifersByCloudIdentiferStrings;
    PHPhotoLibrary * _photoLibrary;
    NSMutableDictionary * _resolvedCloudIdentifiersForLocalCloudIdentifiers;
    NSMutableSet * _unresolvedCloudIdentifierStrings;
}

+ (id)cloudIdentifierKeysByFetchType;

- (void).cxx_destruct;
- (id)_computeFingerprintsForAssetsWithObjectIDsByUUID:(id)arg1;
- (id)_fingerPrintsForAssetUUIDs:(id)arg1;
- (id)_getAssetLocalIdentifiersByFingerPrintForFingerPrints:(id)arg1;
- (void)_lookupCloudIdentifiersForIdentifierCode:(id)arg1 codeSpecificLocalIdentifiers:(id)arg2;
- (void)_lookupCodeSpecificCloudIdentifierStrings:(id)arg1 forIdentifierCode:(id)arg2;
- (void)_lookupLocalIdentifiersForIdentifierCode:(id)arg1 codeSpecificCloudIdentifierStrings:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)lookupCloudIdentifiersForLocalIdentifiers:(id)arg1;
- (id)lookupLocalIdentifiersForCloudIdentifiers:(id)arg1;
- (bool)supportsIdentifierCode:(id)arg1;

@end
