
@protocol MLUpdatable <MLModeling, MLWritable>

@required

+ (<MLUpdatable> *)loadModelFromCompiledArchive:(void*)arg1 modelVersionInfo:(MLVersionInfo *)arg2 compilerVersionInfo:(MLVersionInfo *)arg3 configuration:(MLModelConfiguration *)arg4 error:(id*)arg5;

- (void)cancelUpdate;
- (void)resumeUpdate;
- (void)resumeUpdateWithParameters:(NSDictionary *)arg1;
- (void)setUpdateProgressHandlers:(MLUpdateProgressHandlers *)arg1 dispatchQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)updateModelWithData:(id <MLBatchProvider>)arg1;

@end
