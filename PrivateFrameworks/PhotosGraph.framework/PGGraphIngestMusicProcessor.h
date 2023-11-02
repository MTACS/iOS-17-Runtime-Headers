
@interface PGGraphIngestMusicProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)nowPlayingStreamConverterOptions;

- (void).cxx_destruct;
- (id)_ingestStreamEventSession:(id)arg1 graph:(id)arg2 performerNodesByName:(id)arg3;
- (id)initWithGraphBuilder:(id)arg1;
- (void)processMusicForGraph:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
