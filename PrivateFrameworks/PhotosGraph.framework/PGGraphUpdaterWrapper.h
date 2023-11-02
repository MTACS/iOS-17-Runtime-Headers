
@interface PGGraphUpdaterWrapper : NSObject {
    PGGraphUpdater * _graphUpdater;
}

- (void).cxx_destruct;
- (void)applyChangesFromGraphUpdate:(id)arg1 progressReporter:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithGraphManager:(id)arg1;

@end
