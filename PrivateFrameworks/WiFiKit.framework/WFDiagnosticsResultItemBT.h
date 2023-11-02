
@interface WFDiagnosticsResultItemBT : NSObject <WFDiagnosticsResultItem> {
    bool  _didPassTest;
    NSArray * _failedTests;
    NSArray * _results;
    NSString * _suggestion;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPassTest;
@property (nonatomic, retain) NSArray *failedTests;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, copy) NSString *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (bool)didPassTest;
- (id)failedTests;
- (id)initWithResults:(id)arg1;
- (id)results;
- (void)setDidPassTest:(bool)arg1;
- (void)setFailedTests:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)suggestion;
- (id)title;

@end
