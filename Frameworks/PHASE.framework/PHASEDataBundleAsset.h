
@interface PHASEDataBundleAsset : PHASEAsset {
    struct unique_ptr<Phase::DataBundle, std::default_delete<Phase::DataBundle>> { 
        struct __compressed_pair<Phase::DataBundle *, std::default_delete<Phase::DataBundle>> { 
            struct DataBundle {} *__value_; 
        } __ptr_; 
    }  _dataBundle;
    NSURL * _url;
}

@property (readonly) NSURL *url;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)getDataBundle;
- (id)init;
- (id)initWithUID:(id)arg1 assetRegistry:(id)arg2;
- (id)initWithURL:(id)arg1 uid:(id)arg2 dataBundle:(struct unique_ptr<Phase::DataBundle, std::default_delete<Phase::DataBundle>> { struct __compressed_pair<Phase::DataBundle *, std::default_delete<Phase::DataBundle>> { struct DataBundle {} *x_1_1_1; } x1; })arg3 assetRegistry:(id)arg4;
- (unsigned long long)sizeInBytes;
- (id)url;

@end
