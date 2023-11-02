
@protocol TSTTableInternalGeometryProviding <NSObject>

@required

- (unsigned short)numberOfColumns;
- (unsigned int)numberOfFooterOrGrandTotalRows;
- (unsigned int)numberOfFooterRows;
- (unsigned int)numberOfGrandTotalColumns;
- (unsigned int)numberOfHeaderColumns;
- (unsigned int)numberOfHeaderRows;
- (unsigned int)numberOfRows;

@end
