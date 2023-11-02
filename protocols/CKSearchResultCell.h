
@protocol CKSearchResultCell <NSObject>

@required

+ (NSString *)reuseIdentifier;

- (bool)_ck_isEditing;
- (void)_ck_setEditing:(bool)arg1;
- (void)configureWithQueryResult:(CKSpotlightQueryResult *)arg1 searchText:(NSString *)arg2 mode:(unsigned long long)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)refreshForSearchTextIfNeeded:(NSString *)arg1;
- (NSString *)resultIdentifier;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
