
@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding> {
    NSString * _extendedWord;
    double  _score;
    NSString * _word;
}

@property (readonly) NSString *extendedWord;
@property (readonly) double score;
@property (readonly) NSString *word;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedWord;
- (id)initWithCoder:(id)arg1;
- (id)initWithWord:(id)arg1 extendedWord:(id)arg2 score:(double)arg3;
- (double)score;
- (id)word;

@end
