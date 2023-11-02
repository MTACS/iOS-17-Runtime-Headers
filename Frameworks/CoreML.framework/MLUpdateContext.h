
@interface MLUpdateContext : NSObject {
    NSError * _error;
    long long  _event;
    NSDictionary * _metrics;
    MLModel<MLWritable> * _model;
    NSDictionary * _parameters;
    MLUpdateTask * _task;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) long long event;
@property (nonatomic, retain) NSDictionary *metrics;
@property (nonatomic, retain) MLModel<MLWritable> *model;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic, retain) MLUpdateTask *task;

+ (id)updateContextForEvent:(long long)arg1 metrics:(id)arg2 parameters:(id)arg3 error:(id)arg4;
+ (id)updateContextWithTask:(id)arg1 model:(id)arg2 event:(long long)arg3 metrics:(id)arg4 parameters:(id)arg5;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (long long)event;
- (id)metrics;
- (id)model;
- (id)parameters;
- (void)setError:(id)arg1;
- (void)setEvent:(long long)arg1;
- (void)setMetrics:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
