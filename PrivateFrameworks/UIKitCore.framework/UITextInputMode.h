
@interface UITextInputMode : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSString *primaryLanguage;

+ (id)activeInputModes;
+ (id)currentInputMode;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)primaryLanguage;

@end
