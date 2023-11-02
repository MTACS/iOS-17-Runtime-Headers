
@interface AXSpeechPronunciationOptions : NSObject <NSSecureCoding> {
    NSString * _language;
    NSString * _orthography;
}

@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *orthography;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)language;
- (id)orthography;
- (void)setLanguage:(id)arg1;
- (void)setOrthography:(id)arg1;

@end
