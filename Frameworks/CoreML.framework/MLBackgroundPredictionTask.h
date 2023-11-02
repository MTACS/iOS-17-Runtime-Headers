
@interface MLBackgroundPredictionTask : MLBackgroundTask {
    MLModelConfiguration * _modelConfiguration;
    NSURL * _modelURL;
    MLPredictionOptions * _predictionOptions;
}

@property (nonatomic, copy) MLModelConfiguration *modelConfiguration;
@property (nonatomic, copy) NSURL *modelURL;
@property (nonatomic, copy) MLPredictionOptions *predictionOptions;

+ (bool)supportsSecureCoding;
+ (Class)taskRunnerClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modelConfiguration;
- (id)modelURL;
- (id)predictionOptions;
- (void)setModelConfiguration:(id)arg1;
- (void)setModelURL:(id)arg1;
- (void)setPredictionOptions:(id)arg1;

@end
