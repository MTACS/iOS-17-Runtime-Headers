
@interface PRTagger : NLTagger {
    unsigned long long  _orthoIndex;
}

@property (readonly) unsigned long long orthoIndex;

- (id)initWithTagSchemes:(id)arg1 orthoIndex:(unsigned long long)arg2;
- (unsigned long long)orthoIndex;

@end
