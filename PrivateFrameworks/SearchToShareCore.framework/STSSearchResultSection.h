
@interface STSSearchResultSection : NSObject {
    NSArray * _results;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *results;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)initWithResultsArray:(id)arg1;
- (id)logResults;
- (id)results;
- (void)setResults:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
