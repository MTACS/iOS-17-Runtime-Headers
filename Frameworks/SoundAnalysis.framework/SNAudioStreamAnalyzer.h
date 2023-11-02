
@interface SNAudioStreamAnalyzer : NSObject {
    long long  _analysisState;
    NSObject<OS_dispatch_queue> * _analyzerQueue;
    AVAudioFormat * _currentFormat;
    SNForwardPassAudioStreamAnalyzer * _firstPassAnalyzer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstPassRecordingHistoryDuration;
    NSPredicate * _firstPassRecordingPredicate;
    NSDictionary * _firstPassResultsHistory;
    NSDictionary * _firstPassUltronReportOps;
    NSMutableArray * _requests;
    struct unique_ptr<AT::RingBuffer, std::default_delete<AT::RingBuffer>> { 
        struct __compressed_pair<AT::RingBuffer *, std::default_delete<AT::RingBuffer>> { 
            struct RingBuffer {} *__value_; 
        } __ptr_; 
    }  _ringBuffer;
    struct unique_ptr<CABufferList, std::default_delete<CABufferList>> { 
        struct __compressed_pair<CABufferList *, std::default_delete<CABufferList>> { 
            struct CABufferList {} *__value_; 
        } __ptr_; 
    }  _ringBufferWriteBufferList;
    NSMutableDictionary * _secondPassAnalyzers;
    NSDictionary * _secondPassUltronReportOps;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sysdiagnoseHistoryDuration;
    id /* block */  _unregisterLogCollectHook;
}

@property (nonatomic, readonly) NSString *detailedDescription;

+ (bool)shouldLogRequests;
+ (bool)shouldLogResultsHistory;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addRequest:(id)arg1 completionHandler:(id /* block */)arg2 resultsHandler:(id /* block */)arg3 error:(id*)arg4;
- (bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3;
- (void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;
- (void)completeAnalysis;
- (void)dealloc;
- (id)detailedDescription;
- (id)initWithFormat:(id)arg1;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;

@end
