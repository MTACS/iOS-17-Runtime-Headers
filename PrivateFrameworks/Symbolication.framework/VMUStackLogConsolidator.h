
@interface VMUStackLogConsolidator : NSObject {
    VMUDebugTimer * _debugTimer;
    <VMUCommonGraphInterface> * _scannerOrGraph;
    <VMUStackLogReader> * _stackLogReader;
}

@property (nonatomic, retain) VMUDebugTimer *debugTimer;

- (void).cxx_destruct;
- (id)callTreeWithOptions:(unsigned long long)arg1 nodeFilter:(id /* block */)arg2;
- (id)debugTimer;
- (id)initWithGraph:(id)arg1 stackLogReader:(id)arg2;
- (id)initWithScannerOrGraph:(id)arg1 stackLogReader:(id)arg2;
- (void)setDebugTimer:(id)arg1;
- (id)stackIDsToNodesFilteredBy:(id /* block */)arg1;

@end
