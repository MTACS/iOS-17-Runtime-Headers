
@interface UIDictationPhrase : NSObject <NSSecureCoding> {
    NSArray * _alternativeInterpretations;
    long long  _style;
    NSString * _text;
}

@property (nonatomic, readonly) NSArray *alternativeInterpretations;
@property (nonatomic) long long style;
@property (nonatomic, readonly) NSString *text;

+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2;
+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternativeInterpretations;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 style:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (id)text;

@end
