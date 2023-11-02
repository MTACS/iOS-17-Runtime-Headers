
@interface SBHLibraryCategoriesRootFolder : SBRootFolder {
    bool  _supportsBadging;
}

@property (nonatomic) bool supportsBadging;

- (void)enumerateAllIconsWithBaseIndexPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)setSupportsBadging:(bool)arg1;
- (bool)supportsBadging;

@end
