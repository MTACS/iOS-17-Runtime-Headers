
@interface _MLCANENormalizationParameters : NSObject {
    NSDictionary * _gocParams;
    NSArray * _neuronParams;
    NSDictionary * _normalizationParams;
}

@property (nonatomic, readonly, retain) NSDictionary *gocParams;
@property (nonatomic, readonly, retain) NSArray *neuronParams;
@property (nonatomic, readonly, retain) NSDictionary *normalizationParams;

+ (id)normalizationUnitParametersWith:(id)arg1 gocParams:(id)arg2 neuronParams:(id)arg3;

- (void).cxx_destruct;
- (id)gocParams;
- (id)initWithNormalizationParams:(id)arg1 gocParams:(id)arg2 neuronParams:(id)arg3;
- (id)neuronParams;
- (id)normalizationParams;

@end
