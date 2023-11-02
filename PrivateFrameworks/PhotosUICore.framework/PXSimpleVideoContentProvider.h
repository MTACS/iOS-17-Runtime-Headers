
@interface PXSimpleVideoContentProvider : PXVideoContentProvider {
    NSString * _contentIdentifier;
    double  _loadingProgress;
    PXVideoContentProviderLoadingResult * _loadingResult;
}

- (void).cxx_destruct;
- (void)beginLoadingWithPriority:(long long)arg1;
- (id)contentIdentifier;
- (id)description;
- (id)init;
- (id)initWithPlayerItem:(id)arg1 contentIdentifier:(id)arg2;
- (double)loadingProgress;
- (id)loadingResult;
- (void)setLoadingProgress:(double)arg1;
- (void)setLoadingResult:(id)arg1;

@end
