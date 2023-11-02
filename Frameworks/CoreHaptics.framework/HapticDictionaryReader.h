
@interface HapticDictionaryReader : NSObject {
    unsigned long long  _urlIndex;
}

- (id)parseConfiguration:(id)arg1 error:(id*)arg2;
- (id)parseEvent:(id)arg1 withBaseURL:(id)arg2;
- (id)parseEventParams:(id)arg1;
- (bool)parseEventsAndParameters:(id)arg1 withBaseURL:(id)arg2 reply:(id /* block */)arg3;
- (id)parseParam:(id)arg1;
- (id)parseParamCurve:(id)arg1;
- (id)parseParamCurveControlPoints:(id)arg1;
- (id)readAndVerifyVersion:(id)arg1 error:(id*)arg2;
- (id)scanForEmbeddedResources:(id)arg1;

@end
