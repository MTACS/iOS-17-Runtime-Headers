
@interface USORedactedNode : NSObject {
    long long  _index;
    struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { 
        struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { 
            struct UsoGraph {} *__value_; 
        } __ptr_; 
    }  mUsoGraph;
}

@property (nonatomic) long long index;
@property (nonatomic) /* Warning: unhandled struct encoding: '{unique_ptr<siri::ontology::UsoGraph' */ struct  usoGraph; /* unknown property attribute:  std::default_delete<siri::ontology::UsoGraph>>=^{UsoGraph}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)index;
- (id)initWithIndex:(long long)arg1 usoGraph:(void*)arg2;
- (void)setIndex:(long long)arg1;
- (void)setUsoGraph:(struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph {} *x_1_1_1; } x1; })arg1;
- (struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph {} *x_1_1_1; } x1; })usoGraph;

@end
