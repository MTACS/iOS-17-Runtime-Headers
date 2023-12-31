
@interface SXLayouterFactory : NSObject <SXLayouterFactory> {
    <SXColumnCalculator> * _columnCalculator;
    <SXLayoutContextFactory> * _layoutContextFactory;
    <SXUnitConverterFactory> * _unitConverterFactory;
}

@property (nonatomic, readonly) <SXColumnCalculator> *columnCalculator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXLayoutContextFactory> *layoutContextFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXUnitConverterFactory> *unitConverterFactory;

- (void).cxx_destruct;
- (id)columnCalculator;
- (id)createColumnLayouterWithDelegate:(id)arg1;
- (id)initWithColumnCalculator:(id)arg1 layoutContextFactory:(id)arg2 unitConverterFactory:(id)arg3;
- (id)layoutContextFactory;
- (id)layouterForContainerComponentBlueprint:(id)arg1 delegate:(id)arg2;
- (id)unitConverterFactory;

@end
