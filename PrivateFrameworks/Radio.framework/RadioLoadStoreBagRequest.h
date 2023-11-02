
@interface RadioLoadStoreBagRequest : RadioRequest {
    bool  _ignoresRadioDiskCache;
}

@property (nonatomic) bool ignoresRadioDiskCache;

- (bool)ignoresRadioDiskCache;
- (void)loadStoreBagWithOptions:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setIgnoresRadioDiskCache:(bool)arg1;

@end
