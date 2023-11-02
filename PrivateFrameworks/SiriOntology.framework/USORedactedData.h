
@interface USORedactedData : NSObject {
    NSArray * _redactedList;
    struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { 
        struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { 
            struct UsoGraph {} *__value_; 
        } __ptr_; 
    }  mRedactedGraph;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{unique_ptr<siri::ontology::UsoGraph' */ struct  redactedGraph; /* unknown property attribute:  std::default_delete<siri::ontology::UsoGraph>>=^{UsoGraph}}} */
@property (nonatomic, retain) NSArray *redactedList;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRedactedGraph:(void*)arg1 redactedList:(id)arg2;
- (struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph {} *x_1_1_1; } x1; })redactedGraph;
- (id)redactedList;
- (void)setRedactedGraph:(struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph {} *x_1_1_1; } x1; })arg1;
- (void)setRedactedList:(id)arg1;

@end
