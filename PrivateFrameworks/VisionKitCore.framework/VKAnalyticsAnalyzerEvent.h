
@interface VKAnalyticsAnalyzerEvent : VKAnalyticsEvent {
    unsigned long long  _analysisTypes;
    long long  _ddCount;
    VKAnalysisExecutionDurations * _durations;
    NSError * _error;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    unsigned long long  _imageSource;
    long long  _lineCount;
    long long  _mrcCount;
    unsigned long long  _requestSource;
    unsigned long long  _requestType;
    long long  _textLength;
    long long  _visualSearchCount;
}

@property (nonatomic) unsigned long long analysisTypes;
@property (nonatomic) long long ddCount;
@property (nonatomic, retain) VKAnalysisExecutionDurations *durations;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) unsigned long long imageSource;
@property (nonatomic) long long lineCount;
@property (nonatomic, readonly) double madDocumentDuration;
@property (nonatomic, readonly) double madMRCDuration;
@property (nonatomic, readonly) double madRoundTripAnalysisDuration;
@property (nonatomic, readonly) double madVisualSearchDuration;
@property (nonatomic) long long mrcCount;
@property (nonatomic, readonly) double mrcParseDuration;
@property (nonatomic) unsigned long long requestSource;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) long long textLength;
@property (nonatomic) long long visualSearchCount;

- (void).cxx_destruct;
- (unsigned long long)analysisTypes;
- (id)coreAnalyticsDictionary;
- (long long)ddCount;
- (id)description;
- (id)durations;
- (id)error;
- (id)eventKey;
- (struct CGSize { double x1; double x2; })imageSize;
- (unsigned long long)imageSource;
- (id)initWithExecutionDurations:(id)arg1 request:(id)arg2 analysis:(id)arg3 customIdentifier:(id)arg4 error:(id)arg5;
- (long long)lineCount;
- (double)madDocumentDuration;
- (double)madMRCDuration;
- (double)madRoundTripAnalysisDuration;
- (double)madVisualSearchDuration;
- (long long)mrcCount;
- (double)mrcParseDuration;
- (unsigned long long)requestSource;
- (unsigned long long)requestType;
- (void)setAnalysisTypes:(unsigned long long)arg1;
- (void)setDdCount:(long long)arg1;
- (void)setDurations:(id)arg1;
- (void)setError:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLineCount:(long long)arg1;
- (void)setMrcCount:(long long)arg1;
- (void)setRequestSource:(unsigned long long)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setTextLength:(long long)arg1;
- (void)setVisualSearchCount:(long long)arg1;
- (long long)textLength;
- (long long)type;
- (long long)visualSearchCount;

@end
