
@interface GKScoreParser : NSObject {
    long long  _colonCount;
    bool  _error;
    NSMutableArray * _numericSeparators;
    long long  _precision;
    NSMutableString * _prefix;
    NSMutableString * _suffix;
}

@property (nonatomic) long long colonCount;
@property (nonatomic) bool error;
@property (nonatomic, retain) NSMutableArray *numericSeparators;
@property (nonatomic) long long precision;
@property (nonatomic, retain) NSMutableString *prefix;
@property (nonatomic, retain) NSMutableString *suffix;

+ (id)formattedDifferenceBetweenFirstScore:(id)arg1 secondScore:(id)arg2;

- (void).cxx_destruct;
- (long long)colonCount;
- (bool)error;
- (id)numericSeparators;
- (void)parseScore:(id)arg1;
- (long long)precision;
- (id)prefix;
- (void)setColonCount:(long long)arg1;
- (void)setError:(bool)arg1;
- (void)setNumericSeparators:(id)arg1;
- (void)setPrecision:(long long)arg1;
- (void)setPrefix:(id)arg1;
- (void)setSuffix:(id)arg1;
- (id)suffix;

@end
