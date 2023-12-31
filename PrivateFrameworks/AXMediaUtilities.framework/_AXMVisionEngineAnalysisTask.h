
@interface _AXMVisionEngineAnalysisTask : AXMTask {
    AXMVisionPipelineContext * _context;
    NSUUID * _identifier;
    AXMSourceNode * _source;
}

@property (nonatomic, retain) AXMVisionPipelineContext *context;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) AXMSourceNode *source;

+ (id)itemWithSource:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)context;
- (id)identifier;
- (id)initWithSource:(id)arg1 context:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
