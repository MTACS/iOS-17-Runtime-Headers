
@interface PLResourceModelValidationError : NSError

+ (id)allPossibleErrorCodes;
+ (id)duplicateResourceErrorAmongResources:(id)arg1 forAsset:(id)arg2;
+ (id)duplicatedCPLTypeAssetErrorForAsset:(id)arg1 cplType:(unsigned long long)arg2;
+ (id)localAvailabilityInconsistencyErrorForResource:(id)arg1;
+ (id)malformedKeyErrorForKey:(id)arg1 resource:(id)arg2;
+ (id)malformedTableThumbnailKeyErrorForKey:(id)arg1 assetID:(id)arg2;
+ (id)missingRequiredResourcesErrorForAsset:(id)arg1 message:(id)arg2;
+ (id)tableThumbUUIDMistmatchErrorForKey:(id)arg1 indexFromKey:(unsigned long long)arg2 assetID:(id)arg3;
+ (id)unexpectedLocalResourceError:(id)arg1;
+ (id)unreachableFileThumbnailErrorForKey:(id)arg1 assetID:(id)arg2;
+ (id)unreachableKeyErrorForKey:(id)arg1 atURL:(id)arg2 resource:(id)arg3;
+ (id)unreachableTableThumbnailErrorForKey:(id)arg1 assetID:(id)arg2;

- (id)description;
- (id)init;

@end
