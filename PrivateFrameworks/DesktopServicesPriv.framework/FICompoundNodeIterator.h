
@interface FICompoundNodeIterator : FINodeIterator {
    /* Warning: unhandled struct encoding: '{vector<FINodeIterator *, std::allocator<FINodeIterator *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<FINodeIterator *__strong *, std::allocator<FINodeIterator *>>="__value_"^@}}' */ struct vector<FINodeIterator *, std::allocator<FINodeIterator *>> { 
        __end_ **__begin_; 
    }  _subIterators;
    unsigned long long  fCurrentIterator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)estimatedSize;
- (id)first;
- (bool)fullyPopulated;
- (id)initWithFINodes:(id)arg1 iteratorIncludingInvisibleItems:(bool)arg2;
- (id)next;

@end
