
@interface _CNAutocompleteUserSessionDisplayedResults : NSObject {
    bool  _containsDuetResults;
    NSMutableDictionary * _datesByBatchIndexes;
    bool  _ignored;
    CNAutocompleteFetchRequest * _request;
}

@property (nonatomic) bool containsDuetResults;
@property (nonatomic, retain) NSMutableDictionary *datesByBatchIndexes;
@property (nonatomic) bool ignored;
@property (nonatomic, readonly) CNAutocompleteFetchRequest *request;

- (void).cxx_destruct;
- (bool)containsDuetResults;
- (id)datesByBatchIndexes;
- (void)didReceiveBatch:(unsigned long long)arg1;
- (bool)ignored;
- (id)initWithRequest:(id)arg1;
- (bool)relevantForRequest:(id)arg1;
- (id)request;
- (void)setContainsDuetResults:(bool)arg1;
- (void)setDatesByBatchIndexes:(id)arg1;
- (void)setIgnored:(bool)arg1;

@end
