
@interface BFFFlowStarter : NSObject {
    <BFFFlowDiverter> * _diverter;
}

@property (nonatomic, retain) <BFFFlowDiverter> *diverter;

- (void).cxx_destruct;
- (bool)controllerNeedsToRunForClass:(Class)arg1;
- (bool)controllerNeedsToRunForFlowItem:(id)arg1;
- (id)diverter;
- (id)initWithFlowDiverter:(id)arg1;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (void)setDiverter:(id)arg1;

@end
