
@interface VUICollectionConfiguration : NSObject {
    long long  _gridFilter;
    long long  _gridStyle;
    long long  _gridType;
    bool  _hideLockupTitles;
    double  _minimumLineSpacing;
}

@property (nonatomic) long long gridFilter;
@property (nonatomic) long long gridStyle;
@property (nonatomic) long long gridType;
@property (nonatomic) bool hideLockupTitles;
@property (nonatomic) double minimumLineSpacing;

- (long long)gridFilter;
- (long long)gridStyle;
- (long long)gridType;
- (bool)hideLockupTitles;
- (double)minimumLineSpacing;
- (void)setGridFilter:(long long)arg1;
- (void)setGridStyle:(long long)arg1;
- (void)setGridType:(long long)arg1;
- (void)setHideLockupTitles:(bool)arg1;
- (void)setMinimumLineSpacing:(double)arg1;

@end
