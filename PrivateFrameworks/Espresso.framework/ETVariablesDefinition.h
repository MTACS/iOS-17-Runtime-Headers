
@interface ETVariablesDefinition : NSObject {
    NSArray * _layerNames;
}

@property (retain) NSArray *layerNames;

- (void).cxx_destruct;
- (id)initForLayers:(id)arg1 error:(id*)arg2;
- (id)layerNames;
- (void)setLayerNames:(id)arg1;

@end
