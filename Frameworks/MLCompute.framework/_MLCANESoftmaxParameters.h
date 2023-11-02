
@interface _MLCANESoftmaxParameters : NSObject {
    NSDictionary * _gocParams;
    NSDictionary * _neuronParams;
    NSDictionary * _softmaxParams;
}

@property (nonatomic, readonly, retain) NSDictionary *gocParams;
@property (nonatomic, readonly, retain) NSDictionary *neuronParams;
@property (nonatomic, readonly, retain) NSDictionary *softmaxParams;

+ (id)softmaxUnitParametersWith:(id)arg1 neuronParams:(id)arg2 gocParams:(id)arg3;

- (void).cxx_destruct;
- (id)gocParams;
- (id)initWithSoftmaxParams:(id)arg1 neuronParams:(id)arg2 gocParams:(id)arg3;
- (id)neuronParams;
- (id)softmaxParams;

@end
