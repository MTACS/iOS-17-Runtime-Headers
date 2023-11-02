
@interface SCMLImageModelThresholds : NSObject {
    NSError * __loadError;
    NSDictionary * __thresholdDict;
}

@property (nonatomic, retain) NSError *_loadError;
@property (nonatomic, retain) NSDictionary *_thresholdDict;

+ (id)_createThresholdDictionaryWithError:(id*)arg1;
+ (id)_validateScoreThresholdsJson:(id)arg1 error:(id*)arg2;
+ (id)instance;

- (void).cxx_destruct;
- (id)_loadError;
- (id)_thresholdDict;
- (id)init;
- (void)set_loadError:(id)arg1;
- (void)set_thresholdDict:(id)arg1;
- (double)thresholdForLabel:(id)arg1 classificationMode:(unsigned long long)arg2 modelVersion:(id)arg3 error:(id*)arg4;

@end
