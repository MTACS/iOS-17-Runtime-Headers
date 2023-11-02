
@interface SIRINLUSpan : NSObject <NSSecureCoding> {
    unsigned int  _endTokenIndex;
    NSString * _input;
    NSString * _label;
    NSArray * _matcherNames;
    double  _score;
    unsigned int  _startTokenIndex;
    USOSerializedGraph * _usoGraph;
}

@property unsigned int endTokenIndex;
@property (nonatomic, retain) NSString *input;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSArray *matcherNames;
@property double score;
@property unsigned int startTokenIndex;
@property (nonatomic, retain) USOSerializedGraph *usoGraph;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)endTokenIndex;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 input:(id)arg2 startTokenIndex:(unsigned int)arg3 endTokenIndex:(unsigned int)arg4 usoGraph:(id)arg5 score:(double)arg6 matcherNames:(id)arg7;
- (id)input;
- (id)label;
- (id)matcherNames;
- (double)score;
- (void)setEndTokenIndex:(unsigned int)arg1;
- (void)setInput:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMatcherNames:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setStartTokenIndex:(unsigned int)arg1;
- (void)setUsoGraph:(id)arg1;
- (unsigned int)startTokenIndex;
- (id)usoGraph;

@end
