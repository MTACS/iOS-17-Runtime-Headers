
@interface FPUIAuthenticationRowDescriptor : NSObject <NSCopying> {
    id /* block */  _accessoryButtonTapHandler;
    Class  _cellClass;
    id /* block */  _cellCustomizationHandler;
    NSString * _cellReuseIdentifier;
    long long  _cellSelectionStyle;
    id /* block */  _cellWillDisplayHandler;
    double  _rowHeight;
    id /* block */  _selectionHandler;
    double  _shouldHighlight;
}

@property (nonatomic, copy) id /* block */ accessoryButtonTapHandler;
@property (nonatomic, copy) Class cellClass;
@property (nonatomic, copy) id /* block */ cellCustomizationHandler;
@property (nonatomic, copy) NSString *cellReuseIdentifier;
@property (nonatomic) long long cellSelectionStyle;
@property (nonatomic, copy) id /* block */ cellWillDisplayHandler;
@property (nonatomic) double rowHeight;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (nonatomic) double shouldHighlight;

+ (Class)defaultCellClass;
+ (id)defaultCellReuseIdentifier;

- (void).cxx_destruct;
- (id /* block */)accessoryButtonTapHandler;
- (Class)cellClass;
- (id /* block */)cellCustomizationHandler;
- (id)cellReuseIdentifier;
- (long long)cellSelectionStyle;
- (id /* block */)cellWillDisplayHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (double)rowHeight;
- (id /* block */)selectionHandler;
- (void)setAccessoryButtonTapHandler:(id /* block */)arg1;
- (void)setCellClass:(Class)arg1;
- (void)setCellCustomizationHandler:(id /* block */)arg1;
- (void)setCellReuseIdentifier:(id)arg1;
- (void)setCellSelectionStyle:(long long)arg1;
- (void)setCellWillDisplayHandler:(id /* block */)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)setShouldHighlight:(double)arg1;
- (double)shouldHighlight;

@end
