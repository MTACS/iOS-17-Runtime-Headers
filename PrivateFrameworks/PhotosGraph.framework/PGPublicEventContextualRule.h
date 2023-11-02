
@interface PGPublicEventContextualRule : NSObject <PGContextualRule> {
    PGGraph * _graph;
    NSObject<OS_os_log> * _loggingConnection;
    PGGraphMomentNodeCollection * _momentNodesMatchingPublicEvents;
    PHPhotoLibrary * _photoLibrary;
    PGGraphPublicEventNodeCollection * _publicEventNodes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canProvideContextualKeyAssetsWithOptions:(id)arg1;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 sharingFilter:(unsigned short)arg2 withOptions:(id)arg3 modelReader:(id)arg4 curationContext:(id)arg5 usingBlock:(id /* block */)arg6;
- (id)highlightNodesMatchingYearHighlight:(id)arg1 sharingFilter:(unsigned short)arg2 withOptions:(id)arg3;
- (id)initWithGraph:(id)arg1 photoLibrary:(id)arg2 loggingConnection:(id)arg3;

@end
