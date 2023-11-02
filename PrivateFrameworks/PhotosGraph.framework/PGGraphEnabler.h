
@interface PGGraphEnabler : NSObject {
    PGGraph * _graph;
}

@property (readonly) PGGraph *graph;

- (void).cxx_destruct;
- (id)graph;
- (id)initWithGraph:(id)arg1;
- (bool)locationIsFrequent:(id)arg1;
- (bool)locationIsNearMyHomeOrWork:(id)arg1;

@end
