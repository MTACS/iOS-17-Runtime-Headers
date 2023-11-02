
@interface VCVideoRuleCollectionsRemoteCamera : VCVideoRuleCollections

+ (id)sharedInstance;

- (bool)setupHEVCRules;
- (unsigned int)tilesPerFrame;

@end
