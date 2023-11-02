
@interface _CNAutocompleteQueryCacheMissAggdLogging : NSObject <CNAutocompleteQueryCacheMissLogging> {
    CNAutocompleteAggdProbe * _probe;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) CNAutocompleteAggdProbe *probe;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReturnCacheFalseNegatives:(id)arg1;
- (void)didReturnCacheFalsePositives:(id)arg1;
- (id)init;
- (id)initWithProbe:(id)arg1;
- (id)probe;

@end
