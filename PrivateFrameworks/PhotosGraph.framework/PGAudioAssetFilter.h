
@interface PGAudioAssetFilter : NSObject <PGAssetFilter> {
    NSIndexSet * _audioClassifications;
}

@property (nonatomic, readonly) NSIndexSet *audioClassifications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)name;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audioClassifications;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredAssetsFromAssets:(id)arg1;
- (id)initWithAudioClassifications:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)passesWithAsset:(id)arg1;

@end
