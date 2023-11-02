
@interface PGSearchMetadataComputer : NSObject {
    PGGraph * _graph;
}

@property (readonly) PGGraph *graph;

- (void).cxx_destruct;
- (id)_blockedMeaningsByMeaning;
- (id)_mePersonUUID;
- (id)_suggestableLocalizedSceneNames;
- (id)graph;
- (id)initWithGraph:(id)arg1;
- (id)searchMetadataWithOptions:(id)arg1;

@end
