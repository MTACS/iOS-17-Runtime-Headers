
@interface CRFormTextBasedDetector : NSObject {
    CRFormAnalyzerConfiguration * _configuration;
}

@property (readonly) CRFormAnalyzerConfiguration *configuration;

+ (bool)_isTextRegion:(id)arg1 aboveField:(id)arg2 withTolerance:(double)arg3;
+ (bool)_isTextRegion:(id)arg1 onLeftOfField:(id)arg2 withTolerance:(double)arg3;
+ (id)bestFieldCandidate:(id)arg1 secondCandidate:(id)arg2;

- (void).cxx_destruct;
- (id)configuration;
- (id)detectFormFieldsInImage:(id)arg1 document:(id)arg2 candidateFields:(id)arg3;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;

@end
