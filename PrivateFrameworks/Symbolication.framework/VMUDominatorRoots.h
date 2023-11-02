
@interface VMUDominatorRoots : NSEnumerator {
    VMUDominatorGraph * _dg;
    unsigned int  _i;
}

- (void).cxx_destruct;
- (id)initWithDominatorGraph:(id)arg1;
- (id)nextObject;

@end
