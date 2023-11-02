
@interface LPStreamingMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    bool  _cancelled;
    LPMediaAssetFetcher * _fetcher;
    LPLinkMetadata * _metadata;
    AVAssetImageGenerator * _videoImageGenerator;
}

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (void)done;
- (void)fail;
- (void)start;

@end
