
@interface AVTPresetResources : NSObject <AVTCacheableResource> {
    AVTPreset * _preset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVTPreset *preset;
@property (nonatomic, readonly, copy) NSString *presetIdentifier;
@property (nonatomic, readonly) id resources;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)costForScope:(id)arg1;
- (id)initWithPreset:(id)arg1;
- (id)preset;
- (id)presetIdentifier;
- (bool)requiresEncryption;
- (id)resources;
- (id)volatileIdentifierForScope:(id)arg1;

@end
