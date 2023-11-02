
@interface HSModel : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    <HSModelDelegate> * delegate;
}

- (void).cxx_destruct;
- (bool)getHSModelForEngineMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 numHSModels:(unsigned long long)arg3 modelBuffer:(char *)arg4 length:(unsigned long long)arg5;
- (id)init;
- (void)scheduleCoreSpeechTask:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4;
- (void)setDelegate:(id)arg1;

@end
