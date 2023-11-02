
@interface AlgosScoreCSVReader : NSObject {
    NSError * _error;
    NSDictionary * _headings;
    NSArray * _rows;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSDictionary *headings;
@property (nonatomic, retain) NSArray *rows;

+ (id)csvReader:(id)arg1 header:(bool)arg2;

- (void).cxx_destruct;
- (id)atRow:(id)arg1 col:(id)arg2;
- (id)atRowIndex:(long long)arg1 col:(id)arg2;
- (void)debugPrint:(int)arg1;
- (double)doubleAtRow:(id)arg1 col:(id)arg2 defaultValue:(double)arg3;
- (double)doubleAtRow:(id)arg1 colIndex:(long long)arg2 defaultValue:(double)arg3;
- (id)error;
- (id)fixStrings:(id)arg1;
- (id)headings;
- (id)initWithFileName:(id)arg1 header:(bool)arg2;
- (long long)intAtRow:(id)arg1 col:(id)arg2 defaultValue:(long long)arg3;
- (long long)intAtRow:(id)arg1 colIndex:(long long)arg2 defaultValue:(long long)arg3;
- (id)parseFile:(id)arg1 header:(bool)arg2;
- (id)rows;
- (void)setError:(id)arg1;
- (void)setHeadings:(id)arg1;
- (void)setRows:(id)arg1;
- (void)sortOnColumn:(id)arg1 ascending:(bool)arg2;
- (void)sortOnColumnIndex:(long long)arg1 ascending:(bool)arg2;
- (id)stripAndQuoteString:(id)arg1;

@end
