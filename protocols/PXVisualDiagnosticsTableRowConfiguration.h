
@protocol PXVisualDiagnosticsTableRowConfiguration

@required

- (void)addCellForColumnWithIdentifier:(NSString *)arg1 format:(NSString *)arg2;
- (void)addCellForColumnWithIdentifier:(void *)arg1 rendering:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PXVisualDiagnosticsContext *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, void*
- (void)addCellForColumnWithIdentifier:(NSString *)arg1 text:(NSString *)arg2;
- (double)height;
- (void)setHeight:(double)arg1;

@end
