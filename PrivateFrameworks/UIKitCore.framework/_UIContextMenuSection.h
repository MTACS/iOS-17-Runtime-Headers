
@interface _UIContextMenuSection : NSObject {
    NSUUID * _identifier;
    bool  _isMultiColorPalette;
    bool  _isRoot;
    long long  _layout;
    bool  _overridesCellSizeForLargeText;
    unsigned long long  _preferredActionLineLimit;
    long long  _preferredCellSize;
    NSString * _title;
    bool  _wantsSectionSeparator;
}

@property (nonatomic, readonly) bool isMultiColorPalette;
@property (nonatomic) bool isRoot;
@property (nonatomic, readonly) long long layout;
@property (nonatomic, readonly) unsigned long long preferredActionLineLimit;
@property (nonatomic, readonly) long long preferredCellSize;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) bool wantsSectionSeparator;

+ (id)sectionWithMenu:(id)arg1;

- (void).cxx_destruct;
- (long long)cellSizeGivenTraits:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMultiColorPalette;
- (bool)isRoot;
- (long long)layout;
- (unsigned long long)preferredActionLineLimit;
- (long long)preferredCellSize;
- (void)setIsRoot:(bool)arg1;
- (void)setWantsSectionSeparator:(bool)arg1;
- (id)title;
- (bool)wantsSectionSeparator;

@end
