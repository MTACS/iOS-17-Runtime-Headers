
@interface IntelligencePlatform.KnosisServer : NSObject {
    void defaultResultLimit;
    void indexHandler;
    void intentHandler;
    void operators;
    void parser;
}

+ (id)initWithEntitySubgraphView;

- (void).cxx_destruct;
- (id)executeIntentsWithGraphObjectContextWithRequest:(id)arg1;
- (id)executeIntentsWithRequest:(id)arg1;
- (id)executeKGQWithGraphObjectContextWithRequest:(id)arg1;
- (id)executeKGQWithRequest:(id)arg1;
- (id)init;

@end
