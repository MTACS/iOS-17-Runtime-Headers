
@interface FPSetTagsOperation : FPTransformOperation {
    NSArray * _tagsLists;
}

- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)arg1 tagsLists:(id)arg2;
- (id)replicateForItems:(id)arg1;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;

@end
