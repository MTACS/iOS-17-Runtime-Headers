
@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation {
    NSString * _compoundId;
    NSDictionary * _metadataByIdentifier;
    NSArray * _playActivityIdentifiers;
}

@property (nonatomic, readonly, copy) NSDictionary *metadataByIdentifier;
@property (nonatomic, readonly, copy) NSArray *playActivityIdentifiers;

+ (id)identifierForPlayActivityID:(id)arg1 channelID:(id)arg2 duration:(id)arg3;

- (void).cxx_destruct;
- (id)initWithExternalId:(id)arg1 brandId:(id)arg2 hlsAssetDuration:(id)arg3;
- (id)metadataByIdentifier;
- (id)playActivityIdentifiers;
- (void)processResponse;

@end
