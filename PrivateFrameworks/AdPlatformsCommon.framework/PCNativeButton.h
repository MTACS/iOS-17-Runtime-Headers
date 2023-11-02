
@interface PCNativeButton : NSObject <NSSecureCoding> {
    NSString * _accessibleText;
    PCNativeButtonStyle * _style;
    NSString * _text;
    long long  _type;
}

@property (nonatomic, retain) NSString *accessibleText;
@property (nonatomic, retain) PCNativeButtonStyle *style;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibleText;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAccessibleText:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(long long)arg1;
- (id)style;
- (id)text;
- (long long)type;

@end
