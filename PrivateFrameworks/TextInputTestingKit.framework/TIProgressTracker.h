
@interface TIProgressTracker : NSObject {
    NSString * _badSentenceFilePath;
    NSString * _badSentenceTranscriptFilePath;
    NSString * _intended;
    bool  _limitsReached;
    NSCountedSet * _priorStates;
    long long  _repeatLimit;
    NSDate * _startTime;
    NSMutableArray * _stateTranscript;
    double  _timeout;
}

@property (nonatomic, copy) NSString *badSentenceFilePath;
@property (nonatomic, copy) NSString *badSentenceTranscriptFilePath;
@property (nonatomic, copy) NSString *intended;
@property (nonatomic, readonly) bool limitsReached;
@property (nonatomic, retain) NSCountedSet *priorStates;
@property (nonatomic) long long repeatLimit;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic, retain) NSMutableArray *stateTranscript;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (void)appendStringToFile:(id)arg1 atFilePath:(id)arg2;
- (id)badSentenceFilePath;
- (id)badSentenceTranscriptFilePath;
- (id)initWithIntendedString:(id)arg1 repeatLimit:(long long)arg2 timeout:(double)arg3 badSentencePath:(id)arg4;
- (id)intended;
- (bool)limitsReached;
- (id)priorStates;
- (long long)repeatLimit;
- (void)saveBadSentenceAndTranscript:(unsigned long long)arg1;
- (void)setBadSentenceFilePath:(id)arg1;
- (void)setBadSentenceTranscriptFilePath:(id)arg1;
- (void)setIntended:(id)arg1;
- (void)setPriorStates:(id)arg1;
- (void)setRepeatLimit:(long long)arg1;
- (void)setStartTime:(id)arg1;
- (void)setStateTranscript:(id)arg1;
- (void)setTimeout:(double)arg1;
- (bool)shouldStopAfterAddingStateString:(id)arg1;
- (id)startTime;
- (id)stateTranscript;
- (unsigned long long)stoppageReason;
- (double)timeout;

@end
