
@interface _PXVisualDiagnosticsTableRow : NSObject <PXVisualDiagnosticsTableRowConfiguration> {
    NSSet * _availableColumnIdentifiers;
    NSMutableDictionary * _cellsByColumnIdentifier;
    double  _height;
    PXVisualDiagnosticsTable * _table;
}

@property (nonatomic, readonly) NSMutableDictionary *cellsByColumnIdentifier;
@property (nonatomic) double height;
@property (nonatomic, readonly) PXVisualDiagnosticsTable *table;

- (void).cxx_destruct;
- (void)addCellForColumnWithIdentifier:(id)arg1 format:(id)arg2;
- (void)addCellForColumnWithIdentifier:(id)arg1 rendering:(id /* block */)arg2;
- (void)addCellForColumnWithIdentifier:(id)arg1 text:(id)arg2;
- (id)cellsByColumnIdentifier;
- (double)height;
- (id)initWithTable:(id)arg1 availableColumnIdentifiers:(id)arg2;
- (void)setHeight:(double)arg1;
- (id)table;

@end
