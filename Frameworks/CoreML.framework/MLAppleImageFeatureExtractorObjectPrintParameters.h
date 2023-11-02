
@interface MLAppleImageFeatureExtractorObjectPrintParameters : NSObject {
    NSArray * _expectedKeys;
    NSArray * _expectedShapes;
    unsigned long long  _objectPrintVersion;
}

@property (readonly) NSArray *expectedKeys;
@property (readonly) NSArray *expectedShapes;
@property (readonly) unsigned long long objectPrintVersion;

- (void).cxx_destruct;
- (id)expectedKeys;
- (id)expectedShapes;
- (id)initObjectPrintParameters:(unsigned long long)arg1 expectedShapes:(id)arg2 expectedKeys:(id)arg3 error:(id*)arg4;
- (unsigned long long)objectPrintVersion;

@end
