
@interface _PSZKWFTUnstructuredRemindersConfig : NSObject {
    long long  _defaultConfidenceCategory;
    double  _endSecondsFromQuery;
    bool  _isEnabled;
    float  _priorScoreThreshold;
    double  _startSecondsFromQuery;
}

@property (nonatomic, readonly) long long defaultConfidenceCategory;
@property (nonatomic, readonly) double endSecondsFromQuery;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) float priorScoreThreshold;
@property (nonatomic, readonly) double startSecondsFromQuery;

- (long long)defaultConfidenceCategory;
- (double)endSecondsFromQuery;
- (id)initWithIsEnabled:(bool)arg1 defaultConfidenceCategory:(long long)arg2;
- (id)initWithIsEnabled:(bool)arg1 defaultConfidenceCategory:(long long)arg2 startSecondsFromQuery:(double)arg3 endSecondsFromQuery:(double)arg4 priorScoreThreshold:(float)arg5;
- (bool)isEnabled;
- (float)priorScoreThreshold;
- (double)startSecondsFromQuery;

@end
