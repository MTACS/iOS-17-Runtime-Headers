
@interface MLNeuralNetworksCompileTimeParams : NSObject <NSSecureCoding> {
    NSDictionary * _lossParameters;
    long long  _lossType;
    NSDictionary * _optimizerParameters;
    long long  _optimizerType;
    NSArray * _trainableLayerNames;
    NSDictionary * _updateParameters;
}

@property (nonatomic, retain) NSDictionary *lossParameters;
@property (nonatomic) long long lossType;
@property (nonatomic, retain) NSDictionary *optimizerParameters;
@property (nonatomic) long long optimizerType;
@property (nonatomic, retain) NSArray *trainableLayerNames;
@property (nonatomic, retain) NSDictionary *updateParameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLossType:(long long)arg1 optimizerType:(long long)arg2 optimizerParameters:(id)arg3 lossParameters:(id)arg4 trainableLayerNames:(id)arg5 updateParameters:(id)arg6;
- (id)lossParameters;
- (long long)lossType;
- (id)optimizerParameters;
- (long long)optimizerType;
- (void)setLossParameters:(id)arg1;
- (void)setLossType:(long long)arg1;
- (void)setOptimizerParameters:(id)arg1;
- (void)setOptimizerType:(long long)arg1;
- (void)setTrainableLayerNames:(id)arg1;
- (void)setUpdateParameters:(id)arg1;
- (id)trainableLayerNames;
- (id)unarchiveUpdatableParamsAtURL:(id)arg1 error:(id*)arg2;
- (id)updateParameters;
- (bool)writeUpdatableParamsToURL:(id)arg1 error:(id*)arg2;

@end
