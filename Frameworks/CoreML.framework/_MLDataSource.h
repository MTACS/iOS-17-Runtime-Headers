
@interface _MLDataSource : NSObject <ETDataProvider> {
    NSDictionary * _dataTensorDictionary;
}

@property (nonatomic, retain) NSDictionary *dataTensorDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)dataTensorDictionary;
- (id)initWithMLFeatureProvider:(id)arg1 forPrediction:(bool)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4;
- (unsigned long long)numberOfDataPoints;
- (void)setDataTensorDictionary:(id)arg1;

@end
