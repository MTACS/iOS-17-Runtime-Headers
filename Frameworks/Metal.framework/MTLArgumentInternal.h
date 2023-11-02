
@interface MTLArgumentInternal : MTLArgument {
    MTLBindingInternal * _binding;
}

- (void)dealloc;
- (id)initWithBinding:(id)arg1;

@end
