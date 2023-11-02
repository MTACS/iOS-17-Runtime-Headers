
@interface GEOCategorySearchResultSection : NSObject {
    long long  _cellType;
    NSString * _headerDisplayName;
    GEOStyleAttributes * _styleAttributes;
    NSString * _subHeaderDisplayName;
}

@property (nonatomic) long long cellType;
@property (nonatomic, copy) NSString *headerDisplayName;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (nonatomic, copy) NSString *subHeaderDisplayName;

- (void).cxx_destruct;
- (long long)cellType;
- (id)headerDisplayName;
- (id)init;
- (id)initWithCategorySearchResultSection:(id)arg1;
- (void)setCellType:(long long)arg1;
- (void)setHeaderDisplayName:(id)arg1;
- (void)setSubHeaderDisplayName:(id)arg1;
- (id)styleAttributes;
- (id)subHeaderDisplayName;

@end
