
@interface _LTTranslationParagraph : NSObject <NSSecureCoding> {
    NSString * _identifier;
    bool  _isFinal;
    NSArray * _spans;
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isFinal;
@property (nonatomic, readonly, copy) NSArray *spans;
@property (nonatomic, readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 text:(id)arg2 spans:(id)arg3;
- (id)initWithIdentifier:(id)arg1 text:(id)arg2 spans:(id)arg3 isFinal:(bool)arg4;
- (bool)isFinal;
- (id)spans;
- (id)splitIntoSentences;
- (id)text;

@end
