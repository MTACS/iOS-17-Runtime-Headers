
@interface CLSAnswerFormat : CLSAbstractAnswerFormat {
    long long  _answerFormatType;
}

+ (bool)supportsSecureCoding;

- (id)_init;
- (long long)answerFormatType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAnswerFormatType:(long long)arg1;
- (bool)validateObject:(id*)arg1;

@end
