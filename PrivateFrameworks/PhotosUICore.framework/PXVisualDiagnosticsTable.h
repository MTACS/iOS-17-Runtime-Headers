
@interface PXVisualDiagnosticsTable : NSObject <PXVisualDiagnosticsTableColumnsConfiguration, PXVisualDiagnosticsTableConfiguration, PXVisualDiagnosticsTableRowsConfiguration> {
    NSArray * _columnIdentifiers;
    NSDictionary * _columns;
    PXVisualDiagnosticsContext * _context;
    double  _defaultRowFontSize;
    double  _defaultRowHeight;
    _PXVisualDiagnosticsTableRow * _headerRow;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    NSMutableArray * _mutableColumnIdentifiers;
    NSMutableDictionary * _mutableColumns;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _nextRowAvailableFrame;
    long long  _pageIndex;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *columnIdentifiers;
@property (nonatomic, readonly) NSDictionary *columns;
@property (nonatomic) double defaultRowFontSize;
@property (nonatomic) double defaultRowHeight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_insertPageBreak;
- (void)_renderRow:(id)arg1;
- (void)_renderTitleIfNeeded;
- (void)addColumnWithIdentifier:(id)arg1 configuration:(id /* block */)arg2;
- (void)addRowWithConfiguration:(id /* block */)arg1;
- (id)columnIdentifiers;
- (id)columns;
- (void)configureColumnsWithConfiguration:(id /* block */)arg1;
- (double)defaultRowFontSize;
- (double)defaultRowHeight;
- (id)init;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (void)renderInContext:(id)arg1 withRowsConfiguration:(id /* block */)arg2;
- (void)setDefaultRowFontSize:(double)arg1;
- (void)setDefaultRowHeight:(double)arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
