
@interface HUAccessoryDiagnosticsItemProvider : HFItemProvider {
    NSMutableSet * _diagnosticItems;
    HUAccessoryDiagnosticsItemManager * _itemManager;
}

@property (nonatomic, retain) NSMutableSet *diagnosticItems;
@property (nonatomic) HUAccessoryDiagnosticsItemManager *itemManager;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)diagnosticItems;
- (id)initWithItemManager:(id)arg1;
- (id)invalidationReasons;
- (id)itemManager;
- (id)items;
- (id)reloadItems;
- (void)setDiagnosticItems:(id)arg1;
- (void)setItemManager:(id)arg1;

@end
