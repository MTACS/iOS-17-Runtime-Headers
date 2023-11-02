
@interface NLParameterTuner : NSObject {
    <NLParameterTuningDelegate> * _delegate;
    NSDictionary * _options;
    NSArray * _parameterNames;
    NSArray * _parameters;
}

@property (readonly) <NLParameterTuningDelegate> *delegate;
@property (readonly, copy) NSDictionary *options;
@property (nonatomic, readonly, copy) NSArray *parameterNames;
@property (nonatomic, readonly, copy) NSArray *parameters;

+ (id)parameterTunerWithParameters:(id)arg1 options:(id)arg2 delegate:(id)arg3;
+ (id)tunedParameterBundleWithParameters:(id)arg1 options:(id)arg2 delegate:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_hyperTuneParameterArray;
- (id)delegate;
- (id)initWithParameters:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (id)options;
- (id)parameterNames;
- (id)parameters;
- (id)tunedParameterBundleWithError:(id*)arg1;

@end
