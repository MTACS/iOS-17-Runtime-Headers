
@interface CAMSharedLibraryStatusIndicator : CAMControlStatusIndicator {
    long long  _sharedLibraryMode;
}

@property (setter=setSharedLibraryMode:, nonatomic) long long sharedLibraryMode;

- (unsigned long long)customPointSizeForImageSymbol;
- (id)imageNameForCurrentState;
- (void)setSharedLibraryMode:(long long)arg1;
- (void)setSharedLibraryMode:(long long)arg1 animated:(bool)arg2;
- (long long)sharedLibraryMode;
- (bool)shouldFillOutlineForCurrentState;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;

@end
