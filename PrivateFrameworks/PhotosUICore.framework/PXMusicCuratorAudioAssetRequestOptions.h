
@interface PXMusicCuratorAudioAssetRequestOptions : NSObject {
    bool  _forceMetadataRefetch;
}

@property (nonatomic) bool forceMetadataRefetch;
@property (nonatomic, readonly) NSDictionary *requestOptions;

- (bool)forceMetadataRefetch;
- (id)requestOptions;
- (void)setForceMetadataRefetch:(bool)arg1;

@end
