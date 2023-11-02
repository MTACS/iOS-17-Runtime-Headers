
@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration <NSObject>

@required

- (MPCPlayerPath *)playerPath;
- (MPPropertySet *)playingItemProperties;
- (MPPropertySet *)queueItemProperties;
- (MPPropertySet *)queueSectionProperties;
- (struct { long long x1; long long x2; })tracklistRange;

@optional

- (NSString *)preferredFallbackItemRelationship;

@end
