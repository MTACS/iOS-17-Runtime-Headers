
@interface DICreateUDSBParams : DICreateParams {
    unsigned long long  _sparseBundleBandSize;
}

@property (nonatomic) unsigned long long sparseBundleBandSize;

- (bool)checkExistingFileWithIsDirectory:(bool)arg1 error:(id*)arg2;
- (void)createDiskImageParamsXPC;
- (id)initWithURL:(id)arg1 numBlocks:(unsigned long long)arg2 error:(id*)arg3;
- (void)setSparseBundleBandSize:(unsigned long long)arg1;
- (unsigned long long)sparseBundleBandSize;

@end
