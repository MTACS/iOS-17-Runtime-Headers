
@interface REHTTPDebugCoordinator : NSObject {
    RETrainingSimulator * _simulator;
}

- (void).cxx_destruct;
- (id)_createContentItemWithTitle:(id)arg1 content:(id)arg2;
- (id)_createHTMLTableFromDictionary:(id)arg1;
- (id)_createHTMLTableRowFromArray:(id)arg1 itemElementTag:(id)arg2;
- (id)_createTableWithItems:(id)arg1 itemFormatBlock:(id /* block */)arg2 valueBlock:(id /* block */)arg3;
- (id)_linkElementForTableItem:(id)arg1 paths:(id)arg2;
- (id)_linkToPaths:(id)arg1;
- (id)_stringElementForObject:(id)arg1;
- (id)_stringForObject:(id)arg1;
- (id)_urlFromPaths:(id)arg1;
- (void)generateDiagnosticsForPaths:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithSimulator:(id)arg1;

@end
