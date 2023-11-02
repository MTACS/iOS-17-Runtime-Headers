
@interface MLAppleImageFeatureExtractorScenePrintParameters : NSObject {
    NSString * _requestClassName;
    unsigned long long  _scenePrintVersion;
}

@property (readonly) NSString *requestClassName;
@property (readonly) unsigned long long scenePrintVersion;

- (void).cxx_destruct;
- (id)initScenePrintParameters:(unsigned long long)arg1 requestClass:(id)arg2 error:(id*)arg3;
- (id)requestClassName;
- (unsigned long long)scenePrintVersion;

@end
