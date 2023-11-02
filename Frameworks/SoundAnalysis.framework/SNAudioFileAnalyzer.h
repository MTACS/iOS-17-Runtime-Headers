
@interface SNAudioFileAnalyzer : NSObject {
    AVAudioFile * _audioFile;
    NSObject<OS_dispatch_queue> * _queue;
    SNAudioStreamAnalyzer * _streamAnalyzer;
    bool  _wasCancelled;
}

@property (nonatomic, readonly) NSString *detailedDescription;

- (void).cxx_destruct;
- (bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3;
- (void)analyze;
- (void)analyzeInRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)analyzeWithCompletionHandler:(id /* block */)arg1;
- (void)cancelAnalysis;
- (id)detailedDescription;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;

@end
