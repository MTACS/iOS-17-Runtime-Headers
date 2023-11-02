
@interface PHASESoundAsset : PHASEAsset {
    NSData * _data;
    long long  _normalizationMode;
    NSString * _owningDataBundleIdentifer;
    struct unique_ptr<Phase::Controller::SoundAssetInfo, std::default_delete<Phase::Controller::SoundAssetInfo>> { 
        struct __compressed_pair<Phase::Controller::SoundAssetInfo *, std::default_delete<Phase::Controller::SoundAssetInfo>> { 
            struct SoundAssetInfo {} *__value_; 
        } __ptr_; 
    }  _soundAssetInfo;
    long long  _type;
    NSURL * _url;
}

@property (readonly) NSData *data;
@property (readonly) long long normalizationMode;
@property (readonly) long long type;
@property (readonly) NSURL *url;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)data;
- (struct SoundAssetInfo { int (**x1)(); long long x2; unsigned long long x3; long long x4; int x5; unsigned int x6; double x7; }*)getAssetInfo;
- (id)init;
- (id)initWithData:(id)arg1 uid:(id)arg2 normalizationMode:(long long)arg3 soundAssetInfo:(struct unique_ptr<Phase::Controller::SoundAssetInfo, std::default_delete<Phase::Controller::SoundAssetInfo>> { struct __compressed_pair<Phase::Controller::SoundAssetInfo *, std::default_delete<Phase::Controller::SoundAssetInfo>> { struct SoundAssetInfo {} *x_1_1_1; } x1; })arg4 assetRegistry:(id)arg5;
- (id)initWithUID:(id)arg1 assetRegistry:(id)arg2;
- (id)initWithURL:(id)arg1 uid:(id)arg2 assetType:(long long)arg3 normalizationMode:(long long)arg4 soundAssetInfo:(struct unique_ptr<Phase::Controller::SoundAssetInfo, std::default_delete<Phase::Controller::SoundAssetInfo>> { struct __compressed_pair<Phase::Controller::SoundAssetInfo *, std::default_delete<Phase::Controller::SoundAssetInfo>> { struct SoundAssetInfo {} *x_1_1_1; } x1; })arg5 assetRegistry:(id)arg6;
- (long long)normalizationMode;
- (unsigned long long)sizeInBytes;
- (long long)type;
- (id)url;

@end
