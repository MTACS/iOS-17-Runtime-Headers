
@interface MPCSamplesRecorder : NSObject {
    double  _Q;
    NSObject<OS_dispatch_queue> * _accessQueue;
    <MPCSamplesRecorderDelegate> * _delegate;
    MPCFirstFailureDetector * _firstFailureDetector;
    int  _glitches;
    int  _k;
    double  _max;
    double  _mean;
    double  _min;
    NSString * _modelID;
    NSString * _recordID;
    double  _rms;
    NSMutableArray * _samples;
    bool  _storingSamples;
    int  _thermalLevel;
}

@property (nonatomic, readonly) <MPCSamplesRecorderDelegate> *delegate;
@property (nonatomic, readonly) MPCFirstFailureDetector *firstFailureDetector;
@property (nonatomic, readonly) int glitches;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double mean;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly) int numberOfSamples;
@property (nonatomic, readonly, copy) NSString *recordID;
@property (nonatomic, readonly) double rms;
@property (nonatomic, readonly) NSMutableArray *samples;
@property (getter=isStoringSamples, nonatomic, readonly) bool storingSamples;
@property (nonatomic, readonly) int thermalLevel;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstFailureDetector;
- (id)flushSamplesToCSVDataWithHeader:(bool)arg1;
- (int)glitches;
- (id)initWithRecordID:(id)arg1 modelID:(id)arg2 firstFailureDetector:(id)arg3 shouldStoreSamples:(bool)arg4 delegate:(id)arg5;
- (bool)isStoringSamples;
- (double)max;
- (double)mean;
- (double)min;
- (id)modelID;
- (int)numberOfSamples;
- (id)recordID;
- (void)recordSample:(id)arg1;
- (double)rms;
- (id)samples;
- (int)thermalLevel;

@end
