
@interface USOSerializedGraph : NSObject <NSSecureCoding> {
    NSArray * _alignments;
    NSArray * _edges;
    NSArray * _identifiers;
    NSArray * _nodes;
    NSString * _printedForm;
}

@property (nonatomic, retain) NSArray *alignments;
@property (nonatomic, retain) NSArray *edges;
@property (nonatomic, retain) NSArray *identifiers;
@property (nonatomic, retain) NSArray *nodes;
@property (nonatomic, retain) NSString *printedForm;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alignments;
- (id)createSerializedNode:(const struct UsoGraphNode { int (**x1)(); struct UsoGraph {} *x2; unsigned long long x3; }*)arg1 withError:(id*)arg2;
- (id)edges;
- (void)encodeWithCoder:(id)arg1;
- (id)getIdentifiersIfExists:(const struct UsoGraphNode { int (**x1)(); struct UsoGraph {} *x2; unsigned long long x3; }*)arg1 nodeIndex:(unsigned long long)arg2;
- (const void*)getOrCreateEdgeName:(id)arg1 withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager {} *x1; struct __shared_weak_count {} *x2; })arg2 withError:(id*)arg3;
- (const void*)getOrCreateNodeName:(id)arg1 withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager {} *x1; struct __shared_weak_count {} *x2; })arg2 withError:(id*)arg3;
- (const void*)getOrCreateVerbName:(id)arg1 withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager {} *x1; struct __shared_weak_count {} *x2; })arg2 withError:(id*)arg3;
- (id)getUtteranceAlignmentsIfExists:(const struct UsoGraphNode { int (**x1)(); struct UsoGraph {} *x2; unsigned long long x3; }*)arg1 nodeIndex:(unsigned long long)arg2;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithNodes:(id)arg1 edges:(id)arg2;
- (id)initWithNodes:(id)arg1 edges:(id)arg2 identifiers:(id)arg3 alignments:(id)arg4;
- (id)initWithUsoGraph:(const void*)arg1 withError:(id*)arg2;
- (id)nodes;
- (id)printedForm;
- (void)setAlignments:(id)arg1;
- (void)setEdges:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setPrintedForm:(id)arg1;
- (struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph {} *x_1_1_1; } x1; })toCppUsoGraph:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager {} *x1; struct __shared_weak_count {} *x2; })arg1 withError:(id*)arg2;

@end
