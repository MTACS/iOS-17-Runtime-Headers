
@interface SXDataTableStyle : SXJSONObject

@property (nonatomic, readonly) SXDataTableBorderSides *border;
@property (nonatomic, readonly) SXDataTableCellStyle *cells;
@property (nonatomic, readonly) SXDataTableColumnStyle *columns;
@property (nonatomic, readonly) SXDataTableCellStyle *headerCells;
@property (nonatomic, readonly) SXDataTableColumnStyle *headerColumns;
@property (nonatomic, readonly) SXDataTableRowStyle *headerRows;
@property (nonatomic, readonly) SXDataTableRowStyle *rows;

@end
