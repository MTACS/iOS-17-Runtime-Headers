
@interface FPUIAuthenticationSectionDescriptor : NSObject {
    bool  _active;
    double  _footerHeight;
    NSString * _footerTitle;
    Class  _footerViewClass;
    id /* block */  _footerViewCustomizationBlock;
    NSString * _footerViewReuseIdentifier;
    double  _headerHeight;
    NSString * _headerTitle;
    Class  _headerViewClass;
    id /* block */  _headerViewCustomizationBlock;
    NSString * _headerViewReuseIdentifier;
    Class  _rowCellClass;
    NSString * _rowCellReuseIdentifier;
    bool  _shouldHighlightRows;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) double footerHeight;
@property (nonatomic, copy) NSString *footerTitle;
@property (nonatomic, copy) Class footerViewClass;
@property (nonatomic, copy) id /* block */ footerViewCustomizationBlock;
@property (nonatomic, copy) NSString *footerViewReuseIdentifier;
@property (nonatomic) double headerHeight;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, copy) Class headerViewClass;
@property (nonatomic, copy) id /* block */ headerViewCustomizationBlock;
@property (nonatomic, copy) NSString *headerViewReuseIdentifier;
@property (nonatomic, copy) Class rowCellClass;
@property (nonatomic, copy) NSString *rowCellReuseIdentifier;
@property (nonatomic) bool shouldHighlightRows;

- (void).cxx_destruct;
- (double)footerHeight;
- (id)footerTitle;
- (Class)footerViewClass;
- (id /* block */)footerViewCustomizationBlock;
- (id)footerViewReuseIdentifier;
- (double)headerHeight;
- (id)headerTitle;
- (Class)headerViewClass;
- (id /* block */)headerViewCustomizationBlock;
- (id)headerViewReuseIdentifier;
- (id)init;
- (bool)isActive;
- (Class)rowCellClass;
- (id)rowCellReuseIdentifier;
- (void)setActive:(bool)arg1;
- (void)setFooterHeight:(double)arg1;
- (void)setFooterTitle:(id)arg1;
- (void)setFooterViewClass:(Class)arg1;
- (void)setFooterViewCustomizationBlock:(id /* block */)arg1;
- (void)setFooterViewReuseIdentifier:(id)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderViewClass:(Class)arg1;
- (void)setHeaderViewCustomizationBlock:(id /* block */)arg1;
- (void)setHeaderViewReuseIdentifier:(id)arg1;
- (void)setRowCellClass:(Class)arg1;
- (void)setRowCellReuseIdentifier:(id)arg1;
- (void)setShouldHighlightRows:(bool)arg1;
- (bool)shouldHighlightRows;

@end
