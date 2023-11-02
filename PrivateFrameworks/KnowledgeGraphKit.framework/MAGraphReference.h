
@interface MAGraphReference : NSObject {
    MABaseGraph * _concreteGraph;
    unsigned long long  _hash;
}

@property (readonly) MABaseGraph *concreteGraph;
@property (readonly) <MAGraphProxy> *graph;

- (void).cxx_destruct;
- (id)concreteGraph;
- (id)graph;
- (unsigned long long)hash;
- (id)initWithGraph:(id)arg1;

@end
