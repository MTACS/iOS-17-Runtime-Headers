
@interface BWIrisStillImageMovieMetadataCache : BWSimpleCache

- (void)cacheStillImageTransformDataFromMetadata:(id)arg1 transformReferenceDimensions:(struct { int x1; int x2; })arg2;
- (void)cacheStillImageVideoToPhotoTransform:(id)arg1 forSettingsID:(id)arg2;
- (id)copyAndClearStillImageTransformDataForSettingsID:(id)arg1;

@end
