
@interface MRUOutputDeviceAsset : MRUAsset {
    NSString * _localizedDisplayTitle;
    long long  _type;
}

@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSString *localizedDisplayTitle;
@property (nonatomic, readonly) CCUICAPackageDescription *packageDescription;
@property (nonatomic, readonly) long long type;

+ (id)inCallAsset;
+ (id)sharingAsset;
+ (id)speakerAsset;

- (void).cxx_destruct;
- (id)icon;
- (id)initWithOutputDeviceRoute:(id)arg1;
- (id)initWithPackageAsset:(id)arg1 symbolName:(id)arg2 image:(id)arg3 type:(long long)arg4 deviceCount:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (long long)kind;
- (id)localizedDisplayTitle;
- (id)localizedDisplayTitleForAssetType:(long long)arg1 deviceCount:(unsigned long long)arg2;
- (long long)outputDeviceAssetTypeForOutputDeviceRoute:(id)arg1;
- (id)packageDescription;
- (long long)type;

@end
