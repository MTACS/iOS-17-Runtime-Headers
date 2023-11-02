
@protocol GEOSearchResultSection

@required

- (long long)cellType;
- (NSString *)headerDisplayName;
- (void)setCellType:(long long)arg1;
- (void)setHeaderDisplayName:(NSString *)arg1;
- (void)setSubHeaderDisplayName:(NSString *)arg1;
- (GEOStyleAttributes *)styleAttributes;
- (NSString *)subHeaderDisplayName;

@end
