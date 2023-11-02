
@interface FigCapturePipeline : NSObject {
    BWGraph * _graph;
    NSString * _name;
    NSMutableArray * _nodes;
}

@property (nonatomic, readonly) BWGraph *graph;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *nodes;

- (bool)addNode:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)graph;
- (id)initWithGraph:(id)arg1 name:(id)arg2;
- (id)name;
- (id)nodes;

@end
