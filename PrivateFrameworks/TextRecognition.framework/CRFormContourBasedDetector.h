
@interface CRFormContourBasedDetector : NSObject {
    CRFormAnalyzerConfiguration * _configuration;
}

@property (readonly) CRFormAnalyzerConfiguration *configuration;

- (void).cxx_destruct;
- (id)configuration;
- (id)detectFormFieldsInImage:(id)arg1;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;

@end
