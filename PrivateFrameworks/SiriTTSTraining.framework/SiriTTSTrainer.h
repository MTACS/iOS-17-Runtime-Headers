
@interface SiriTTSTrainer : NSObject {
    <SiriTTSTrainerTaskDelegate> * _delegate;
    struct shared_ptr<SiriTTS::TTSTrainer> { 
        struct TTSTrainer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _trainer;
}

@property (nonatomic) <SiriTTSTrainerTaskDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)callback_func:(struct CallbackMessage { int x1; struct ProgressMessage { int x_2_1_1; int x_2_1_2; } x2; })arg1;
- (id)delegate;
- (id)initWithPaths:(id)arg1 dataAssetPath:(id)arg2 inferenceAssetPath:(id)arg3;
- (id)initWithPaths:(id)arg1 dataAssetPath:(id)arg2 inferenceAssetPath:(id)arg3 taskId:(id)arg4;
- (void)pause;
- (void)setDelegate:(id)arg1;
- (long long)start_preprocess:(id)arg1;
- (long long)start_train:(long long)arg1 delegate:(id)arg2;
- (void)stop;

@end
