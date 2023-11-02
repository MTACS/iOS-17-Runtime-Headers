
@interface IETestResults : NSObject {
    NSArray * _parseErrors;
    NSArray * _results;
}

@property (nonatomic, retain) NSArray *parseErrors;
@property (nonatomic, retain) NSArray *results;

- (void).cxx_destruct;
- (int)getCount:(unsigned long long)arg1;
- (id)parseErrors;
- (id)results;
- (void)setParseErrors:(id)arg1;
- (void)setResults:(id)arg1;

@end
