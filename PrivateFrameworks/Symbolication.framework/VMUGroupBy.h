
@interface VMUGroupBy : NSObject {
    VMUProcessObjectGraph * _graph;
}

@property (readonly) VMUProcessObjectGraph *graph;

- (void).cxx_destruct;
- (void)enumerateGroups:(void*)arg1 withBlock:(id /* block */)arg2;
- (id)graph;
- (id)initWithGraph:(id)arg1;
- (id)typeNameForNode:(unsigned int)arg1;

@end
