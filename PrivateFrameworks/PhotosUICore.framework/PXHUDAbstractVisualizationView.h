
@interface PXHUDAbstractVisualizationView : UIView <PXHUDVisualizationDelegate> {
    PXHUDVisualization * _visualization;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXHUDVisualization *visualization;

- (void).cxx_destruct;
- (void)setVisualization:(id)arg1;
- (id)visualization;
- (void)visualizationDidChange:(id)arg1;
- (void)visualizationDidUpdate;

@end
