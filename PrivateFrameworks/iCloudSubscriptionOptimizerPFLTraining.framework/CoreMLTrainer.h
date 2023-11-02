
@interface CoreMLTrainer : NSObject <Evaluator> {
    NSURL * _modelURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *modelURL;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)evaluateWithModelURL:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (id)modelURL;
- (id)processModelURL:(id)arg1;
- (void)setModelURL:(id)arg1;

@end
