
@interface GDKnosisServer : NSObject {
    _TtC20IntelligencePlatform12KnosisServer * _knosisServer;
}

- (void).cxx_destruct;
- (void)executeIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)executeIntent:(id)arg1 completionHandlerWithGraphObjectContext:(id /* block */)arg2;
- (void)executeKGQ:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)executeKGQ:(id)arg1 completionHandlerWithGraphObjectContext:(id /* block */)arg2;
- (id)initWithEntitySubgraphView;

@end
