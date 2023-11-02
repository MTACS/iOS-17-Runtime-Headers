
@interface SGDOMParserResult : NSObject <NSSecureCoding> {
    NSString * _plainText;
    NSArray * _taggedCharacterRanges;
}

@property (nonatomic, readonly) NSString *plainText;
@property (nonatomic, readonly) NSArray *taggedCharacterRanges;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlainText:(id)arg1 taggedCharacterRanges:(id)arg2;
- (void)insertSubject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDOMParserResult:(id)arg1;
- (id)plainText;
- (id)taggedCharacterRanges;

@end
