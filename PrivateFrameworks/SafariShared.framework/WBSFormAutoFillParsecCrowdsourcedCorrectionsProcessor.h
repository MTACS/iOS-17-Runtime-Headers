
@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject {
    <WBSFormAutoFillCorrectionsStore> * _correctionsStore;
}

+ (id)_correctionsSchema;
+ (id)_schemaWithExpectedClass:(Class)arg1 errorCode:(long long)arg2 isOptional:(bool)arg3;
+ (id)test_correctionsSchema;

- (void).cxx_destruct;
- (void)getLastCorrectionsRetrievalURLStringWithResultHandler:(id /* block */)arg1;
- (id)initWithCorrectionsStore:(id)arg1;
- (void)setCorrectionsWithJSONData:(id)arg1 retrievalURLString:(id)arg2;

@end
