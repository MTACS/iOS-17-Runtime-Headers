
@interface SXHorizontalStackLayouter : NSObject <SXLayouter> {
    <SXColumnCalculator> * _columnCalculator;
    SXContainerComponentBlueprint * _containerComponentBlueprint;
    <SXLayoutContextFactory> * _layoutContextFactory;
    SXLayouterFactory * _layouterFactory;
    <SXUnitConverterFactory> * _unitConverterFactory;
    <SXLayouterDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXLayouterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(bool*)arg4;
- (void)setDelegate:(id)arg1;

@end
