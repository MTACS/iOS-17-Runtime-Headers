
@interface UIDictationVoiceCommandParameter : NSObject <NSSecureCoding> {
    NSString * _text;
}

@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
