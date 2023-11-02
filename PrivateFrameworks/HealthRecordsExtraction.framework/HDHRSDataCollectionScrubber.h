
@interface HDHRSDataCollectionScrubber : NSObject <HKJSONVisitorDelegate> {
    NSMutableArray * _objectStack;
    id  _redactedResource;
    HKPIIRedactor * _redactor;
    NSDictionary * _rules;
    HKJSONVisitor * _visitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)scrubberForResource:(id)arg1 redactor:(id)arg2 rules:(id)arg3 error:(out id*)arg4;

- (void).cxx_destruct;
- (void)_addObjectToTopObject:(id)arg1 key:(id)arg2;
- (unsigned long long)_redactorOptionsForRule:(id)arg1;
- (id)_ruleNodeForKeyPath:(id)arg1;
- (id)generateRedactedResource;
- (long long)visitor:(id)arg1 didVisitArray:(id)arg2;
- (long long)visitor:(id)arg1 didVisitDictionary:(id)arg2;
- (long long)visitor:(id)arg1 visitPrimitive:(id)arg2;
- (long long)visitor:(id)arg1 willVisitArray:(id)arg2;
- (long long)visitor:(id)arg1 willVisitDictionary:(id)arg2;

@end
