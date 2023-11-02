
@interface DDSMAAsset : DDSAsset {
    MAAsset * _maAsset;
}

@property (nonatomic, readonly) MAAsset *maAsset;

- (void).cxx_destruct;
- (id)initWithMAAsset:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maAsset;

@end
