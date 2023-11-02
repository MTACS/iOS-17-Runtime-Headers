
@interface MLComputeDataSource : NSObject {
    NSDictionary * _dataDictionary;
}

@property (nonatomic, readonly) NSDictionary *dataDictionary;

- (void).cxx_destruct;
- (id)dataCHWFromChanneledPixelType:(struct __CVBuffer { }*)arg1 channelOrderIsBGR:(bool)arg2 error:(id*)arg3;
- (id)dataCHWFromPixelBuffer:(struct __CVBuffer { }*)arg1 channelOrderIsBGR:(bool)arg2 error:(id*)arg3;
- (id)dataCHWFromPixelTypeGray8:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)dataDictionary;
- (id)initWithFeatureProvider:(id)arg1 forPrediction:(bool)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4;
- (id)oneHotEncodedDataFromFeatureValue:(id)arg1 withNNEngine:(id)arg2 error:(id*)arg3;

@end
