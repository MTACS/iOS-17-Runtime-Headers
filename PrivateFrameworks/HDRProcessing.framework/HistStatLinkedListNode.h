
@interface HistStatLinkedListNode : NSObject {
    float * _avgValBuffer;
    float * _maxValBuffer;
    float * _minValBuffer;
    HistStatLinkedListNode * _next;
    unsigned long long  _numOfProcessedFrames;
    float ** _prctValBuffer;
    HistStatLinkedListNode * _prev;
    float  _prevAvgVal;
    float  _prevMaxVal;
    float * _prevNormHistHeight;
    float * _stdValBuffer;
    long long  _streamId;
    double * _targetMaxBuffer;
}

@property float*avgValBuffer;
@property float*maxValBuffer;
@property float*minValBuffer;
@property (retain) HistStatLinkedListNode *next;
@property unsigned long long numOfProcessedFrames;
@property float**prctValBuffer;
@property (retain) HistStatLinkedListNode *prev;
@property float prevAvgVal;
@property float prevMaxVal;
@property float*prevNormHistHeight;
@property float*stdValBuffer;
@property long long streamId;
@property double*targetMaxBuffer;

- (void).cxx_destruct;
- (float*)avgValBuffer;
- (void)dealloc;
- (void)detachAllNodes;
- (id)initWithStreamId:(long long)arg1 bufferSize:(unsigned short)arg2;
- (float*)maxValBuffer;
- (float*)minValBuffer;
- (id)next;
- (unsigned long long)numOfProcessedFrames;
- (float**)prctValBuffer;
- (id)prev;
- (float)prevAvgVal;
- (float)prevMaxVal;
- (float*)prevNormHistHeight;
- (void)setAvgValBuffer:(float*)arg1;
- (void)setMaxValBuffer:(float*)arg1;
- (void)setMinValBuffer:(float*)arg1;
- (void)setNext:(id)arg1;
- (void)setNumOfProcessedFrames:(unsigned long long)arg1;
- (void)setPrctValBuffer:(float**)arg1;
- (void)setPrev:(id)arg1;
- (void)setPrevAvgVal:(float)arg1;
- (void)setPrevMaxVal:(float)arg1;
- (void)setPrevNormHistHeight:(float*)arg1;
- (void)setStdValBuffer:(float*)arg1;
- (void)setStreamId:(long long)arg1;
- (void)setTargetMaxBuffer:(double*)arg1;
- (float*)stdValBuffer;
- (long long)streamId;
- (double*)targetMaxBuffer;

@end
