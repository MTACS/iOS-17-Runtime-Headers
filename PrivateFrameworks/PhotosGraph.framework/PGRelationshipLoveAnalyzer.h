
@interface PGRelationshipLoveAnalyzer : NSObject <PGRelationshipAnalyzer> {
    PGGraphRelationshipProcessor * _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRelationshipProcessor:(id)arg1;
- (id)name;
- (void)runAnalysisWithProgressBlock:(id /* block */)arg1;

@end
