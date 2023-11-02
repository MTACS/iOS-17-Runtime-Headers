
@interface BWNodeEnumerator : NSEnumerator {
    unsigned long long  _depth;
    BWGraph * _graph;
    NSMutableDictionary * _nodeVisitCountMap;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithGraph:(id)arg1;

@end
