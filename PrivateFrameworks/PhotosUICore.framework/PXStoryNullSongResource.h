
@interface PXStoryNullSongResource : NSObject <PXStorySongResource> {
    <PXAudioAsset> * _asset;
    NSString * _identifier;
    long long  _resourceKind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *px_storyResourceIdentifier;
@property (nonatomic, readonly) long long px_storyResourceKind;
@property (nonatomic, readonly) <PXAudioAsset> *px_storyResourceSongAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)px_storyResourceIdentifier;
- (long long)px_storyResourceKind;
- (id)px_storyResourceSongAsset;

@end
