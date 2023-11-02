
@interface MPModelShimResponse : MPResponse {
    MPModelResponse * _modelResponse;
}

@property (nonatomic, retain) MPModelResponse *modelResponse;

+ (id)builderProtocol;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;
- (id)modelResponse;
- (void)setModelResponse:(id)arg1;

@end
