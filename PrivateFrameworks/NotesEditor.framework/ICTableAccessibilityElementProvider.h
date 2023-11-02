
@interface ICTableAccessibilityElementProvider : NSObject {
    NSMutableDictionary * _cellCache;
    ICTableAccessibilityController * _tableAXController;
    ICTable * _tableModel;
}

@property (nonatomic, retain) NSMutableDictionary *cellCache;
@property (nonatomic) ICTableAccessibilityController *tableAXController;
@property (nonatomic, readonly) ICTable *tableModel;

- (void).cxx_destruct;
- (id)cellCache;
- (id)cellElementForColumnID:(id)arg1 rowID:(id)arg2;
- (id)cellElementsForColumnID:(id)arg1;
- (id)cellElementsForRowID:(id)arg1;
- (id)initWithTableAccessibilityController:(id)arg1;
- (void)removeElementsForColumnID:(id)arg1;
- (void)removeElementsForRowID:(id)arg1;
- (void)setCellCache:(id)arg1;
- (void)setTableAXController:(id)arg1;
- (id)tableAXController;
- (id)tableModel;

@end
