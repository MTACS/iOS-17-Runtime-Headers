
@interface USOGraph : NSObject <NSSecureCoding> {
    struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { 
        struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { 
            struct UsoGraph {} *__value_; 
        } __ptr_; 
    }  _usoGraph;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createEntityNode:(const void*)arg1;
- (id)createIntNode:(id)arg1;
- (id)createOperatorNode:(const void*)arg1;
- (id)createStringNode:(id)arg1;
- (id)createTaskNode:(const void*)arg1 verb:(const void*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void*)getCppGraph;
- (void*)getCppRootNode;
- (id)getRoot;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCppUsoGraph:(struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph {} *x_1_1_1; } x1; })arg1;

@end
