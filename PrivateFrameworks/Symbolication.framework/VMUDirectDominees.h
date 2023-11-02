
@interface VMUDirectDominees : NSEnumerator {
    VMUDominatorGraph * _dg;
    unsigned int  _node;
}

- (void).cxx_destruct;
- (id)initWithDominatorGraph:(id)arg1 rootNode:(unsigned int)arg2;
- (id)nextObject;

@end
